#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<sys/socket.h>
#include<stdlib.h>
#include<unordered_map>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/socket.h>
#include<sys/stat.h>
#include<sys/sendfile.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<pthread.h>
#include<unistd.h>
#include<fcntl.h>
#include"Util.hpp"
using namespace std;

#define WWW "./wwwroot"
class Request
{
	private:
		string	Request_line;
		string	Request_header;
		string  Request_blank;
		string	Request_body;
	private:
		string method;
		string uri;
		string version;
		unordered_map<string,string> header_kv;

		string path;//资源路径
		string query_string;//GET 上传的参数
		int recourse_size;
		bool cgi;
		string suffix;

		bool done;
	public:
		Request()
			:Request_blank("\n")
			 ,path(WWW)
			 ,recourse_size(0)
			 ,cgi(false)
			 ,done(false)
			 ,suffix(".html")
		{
		}
		bool GetDone()
		{
			return done;
		}
		void SetDone(bool _done)
		{
			done=_done;
		}
		string& GetQueryString()
		{
			return query_string;
		}
		string& GetMethod()
		{
			return method;
		}
		string& GetPath()
		{
			return path;
		}
		string& GetRequestBody()
		{
			return Request_body;
		}
		string& GetRequestHeader()
		{
			return Request_header;
		}
		string& GetRequestLine() 
		{
			return Request_line;
		}
		string& Getsuffix()
		{
			return suffix;
		}
		void RequestLineParse()
		{
			//Get /index.html http/1.1
			stringstream ss(Request_line);
			ss>>method>>uri>>version;
		//	cout<<"method:"<<method<<endl;
		//	cout<<"uri:"<<uri<<endl;
		//	cout<<"version:"<<version<<endl;
			Util::StringToUpper(method);
		}
		bool MethodIsLegal()
		{	
			//Get || Post
			if(method=="POST"||method=="GET")
				return true;
			return false;
		}
		void RequestHeaderParse()
		{
			vector<string> v;
			Util::Transfrom(Request_header,v);		
			auto it=v.begin();
			for(;it!=v.end();it++)
			{
				string key;
				string val;
				Util::MakeKv(*it,key,val);
				header_kv.insert(make_pair(key,val));
			}
		}
		//1.POST:一定带参数
		//2.GET：如果包含？，则一定带参数
		//3.GET:没有参数，不带参数
		void UriParse()
		{
			if(method=="POST")
			{
				cgi=true;
				path+=uri;
			}
			else
			{//GET
				size_t pos=uri.find('?');
				if(string::npos==pos)
				{
					path+=uri;
				}
				else
				{
					cgi=true;
					path+=uri.substr(0,pos);
					query_string=uri.substr(pos+1);
				}
			}

			if(path[path.size()-1]=='/')
			{
				path+="index.html";
			}
			size_t pos=path.rfind('.');
			if(string::npos==pos)
			{
				suffix = ".html";
			}
			else
			{	
				suffix=path.substr(pos);
			}
		}
		bool IsPathLegal()
		{
			//path = "/";
			struct stat st;
			if(stat(path.c_str(),&st)==0)
			{
				if(S_ISDIR(st.st_mode))
				{
					path+="/index.html";
				}
				else
				{
					if((st.st_mode & S_IXUSR)||
						(st.st_mode & S_IXGRP)||
						(st.st_mode & S_IXOTH))
						cgi=true;
				}
				recourse_size=st.st_size;
				return true;
			}
			else
			{
				return false;
			}

		}
		bool IsCgi()
		{
			return cgi;
		}
		bool IsNeedRecv()
		{
			if(method=="POST")
				return true;
			return false;
		}
		int GetContentLength()
		{
			auto it=header_kv.find("Content-Length");
			if(it==header_kv.end())
				return -1;
			return Util::StringToInt(it->second);
		}
		int GetRqSize()
		{
			return recourse_size;
		}
		void Make_404()
		{
			path="wwwroot/404dir/404.html";
			size_t pos=uri.rfind('.');
			if(string::npos==pos)
			{
				suffix = ".html";
			cout<<"aaa suffix is: "<<suffix<<endl;
			}
			else
			{
				cout<<"uri: "<<uri<<endl;
				cout<<"pos "<<pos<<endl;
				suffix=uri.substr(pos);
			}
			cout<<"suffix is: "<<suffix<<endl;
			struct stat st;
			stat(path.c_str(),&st);
			recourse_size=st.st_size;
		}
		void ReMakeRequest(int code)
		{
			switch(code)
			{
				case 404:
				case 400:
					Make_404();
					break;
				default:
					break;
			}

		}

		~Request()
		{
		}
};
class Response
{
	private:
		string Response_line;
		string Response_header;
		string Response_blank;
		string Response_body;
		int fd;
		int size;
	public:
		Response()
			:Response_blank("\n")
			 ,fd(-1)
		{
		}
		void MakeResponseLine(int code)
		{
			Response_line="HTTP/1.0";
			Response_line+=" ";
			Response_line+=Util::IntToString(code);
			Response_line+=" ";
			Response_line+=Util::CodeStatus(code);
			Response_line+="\n";
		}
		void MakeResponseHeader(vector<string>& v)
		{
			string connection="Connection: close";
			v.push_back(connection);
			auto it=v.begin();
			for(;it!=v.end();it++)
			{
				Response_header += *it;
				Response_header += "\n";
		}
		}
		void MakeResponse(Request* rq,int code,bool cgi)
		{
			vector<string> v;
			MakeResponseLine(code);
			if(cgi)
			{//cgi
				string ct=Util::SuffixToType("");
				v.push_back(ct);
				string cl="Content-Length: ";
				cl+=Util::IntToString(Response_body.size());
				v.push_back(cl);
				MakeResponseHeader(v);
			}
			else
			{
				string ct=Util::SuffixToType(rq->Getsuffix());
			//	string ct="Content-Type: text/html";
				v.push_back(ct);
				cout<<"ct "<<ct<<endl;
				MakeResponseHeader(v);
				string path=rq->GetPath();
				fd=open(path.c_str(),O_RDONLY);
				size=rq->GetRqSize();
			}
		}	
			string& GetResponseLine()
			{
				return Response_line;
			}
			string& GetResponseHeader()
			{
				return Response_header;
			}
			string& GetResponseBlank()
			{
				return Response_blank;
			}
			string& GetResponseBody()
			{
				return Response_body;
			}
			int GetFd()
			{		
				return fd;
			}	
			int GetSize()
			{
				return size;
			}
		~Response()
		{
			if(fd>=0)
				close(fd);
		}

};
class Endpoint
{
	private:
		int sock;
	public:
	Endpoint(int _sock)
		:sock(_sock)
	{}
	int Recvline(string& line)
	{
			char c='X';
			while(c!='\n')//'\r' '\r\n' '\n'
			{
				ssize_t s = recv(sock,&c,1,0);
				if(s>0)
					{
						if(c=='\r')//'\r\n' '\r'
						{
							if(recv(sock,&c,1,MSG_PEEK)>0)
							{
								if(c=='\n')
									recv(sock,&c,1,0);
							}
							c='\n';
						}
						line.push_back(c);
					}

				else if(s==0)
				{
					c='\n';
					line.push_back(c);
					break;
				}
				else
					{
						c='\n';
						line.push_back(c);
						break;
					}
			}
			return line.size();
	}
	void RecvRequestLine(Request* rq)
	{
		Recvline(rq->GetRequestLine());
	}
	void RecvRequestHeader(Request* rq)
	{
		string& str = rq->GetRequestHeader();
		do
		{
			string line="";
			Recvline(line);
			if(line == "\n")
			{
				break;
			}
			str+=line;
		}while(1);
	}
	void RecvRequestBody(Request* rq)
	{
		int len=rq->GetContentLength();
		string& body=rq->GetRequestBody();
		char c;
		while(len--)
		{
			if(recv(sock,&c,1,0)>0)
				body+=c;
		}
	}
	void SendResponse(Response* rsp,bool cgi)
	{
		string &Responsemsg=rsp->GetResponseLine();
		Responsemsg+=rsp->GetResponseHeader();
		Responsemsg+=rsp->GetResponseBlank();
		send(sock,Responsemsg.c_str(),Responsemsg.size(),0);
		if(cgi)
		{
			string& body=rsp->GetResponseBody();
			send(sock,body.c_str(),body.size(),0);
		}
		else
		{//GET && no args
			int fd=rsp->GetFd();
			int size=rsp->GetSize();
			sendfile(sock,fd,NULL,size);
		}
	}
	void ClearRequest(Request* rq)
	{
		if(rq->GetDone())	
			return;
		if(rq->GetRequestHeader().empty())
			RecvRequestHeader(rq);
		if((rq->IsNeedRecv())&&(rq->GetRequestBody().empty()))
			RecvRequestBody(rq);
		rq->SetDone(true);
	}
	~Endpoint()
	{
		if(sock>=0)
			close(sock);
	}
};


class Entry
{
	public:

	static int  ProcessCgi(Request* rq,Response* rsp)
	{
		
		int code=200;
		string path=rq->GetPath();
		string method=rq->GetMethod();
		string query_string=rq->GetQueryString();
		string Requestbody=rq->GetRequestBody();
		string Contentlength=Util::IntToString(rq->GetContentLength());
		string& Responsebody=rsp->GetResponseBody();
		string method_env="METHOD=";
		method_env+=method;
		string query_string_env="QUERY_STRING=";
		query_string_env+=query_string;
		string contentlength_env="CONTENT_LENGTH=";
		contentlength_env+=Contentlength;
		
		int input[2]={0};
		int output[2]={0};
		pipe(input);
		pipe(output);
		pid_t id=fork();
		if(id<0)
		{
			code = 500;
		}
		else if(id==0)
		{//child CGI
			close(input[1]);
			close(output[0]);
			dup2(input[0],0);
			dup2(output[1],1);
			if(method=="POST")
			{
				putenv((char*)contentlength_env.c_str());
			}
			else if(method=="GET")
			{
				putenv((char*)query_string_env.c_str());
			}
			else
			{}
			putenv((char*)method_env.c_str());
			execl(path.c_str(),path.c_str(),nullptr);
			exit(1);
		}
		else
		{//father http
			close(input[0]);
			close(output[1]);
			if(method=="POST")
			{
				size_t i=0;
				for(;i<Requestbody.size();i++)
					write(input[1],&Requestbody[i],1);
			}
			char c;
			while(read(output[0],&c,1)>0)
			{
				Responsebody.push_back(c);
			}
			waitpid(id,nullptr,0);
		}
		return code;
	}
	static void* HanderRequest(void* argv)
	{	
		int code=200;
		int* p=(int*)argv;
		int sock=*p;
		Endpoint* ep=new Endpoint(sock);
		Request* rq=new Request();
		Response* rsp=new Response();
		ep->RecvRequestLine(rq);
		rq->RequestLineParse();
		if(!rq->MethodIsLegal())
		{
			//非法方法
			code=400;
			goto end;
		}
		ep->RecvRequestHeader(rq);
		rq->RequestHeaderParse();
		if(rq->IsNeedRecv())
		{
			ep->RecvRequestBody(rq);
		}
		rq->SetDone(true);
		rq->UriParse();
		if(!rq-> IsPathLegal())
		{
			code=404;
			goto end;
		}
		if(rq->IsCgi())
		{
			code = ProcessCgi(rq,rsp);
			if(code==200)
			{
				rsp->MakeResponse(rq,code,rq->IsCgi());
				ep->SendResponse(rsp,true);
			}
		}
		else
		{//GET && no args	
			rsp->MakeResponse(rq,code,rq->IsCgi());
			ep->SendResponse(rsp,false);
		}

end:
		if(code!=200)
		{
			ep->ClearRequest(rq);
			rq->ReMakeRequest(code);
			rsp->MakeResponse(rq,code,false);
			ep->SendResponse(rsp,false);
		    cout<<"end: "<<code<<endl;
		}
		delete p;
		delete ep;
		delete rq;
		delete rsp;
	}

};
