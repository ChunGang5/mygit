#pragma once

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string>
#include <vector>
#include <unistd.h>
#include <unordered_map>	//采用哈希
#include <utility>
#include "Util.hpp"
using namespace std;

class HttpRequest{
	private:
		string request_line;
		string request_header;
		string request_blank;
		string request_body;
	private:
		string method;
		string uri;
		string version;
		unordered_map<string,string>header_kv;

	public:
		HttpRequest():request_blank("\n")
		{

		}
		string &GetRequestHeader()
		{
			return request_header;
			}
		string &GetRequestLine()
		{
			return request_line;
		}
		string &GetRequestBody()
		{
			return request_body;
		}
		bool MethodIsLegal()
		{
			//GET  or POST
			if(method != "GET" && method != "POST")
			{
				return false;
			}
			return true;
			}
		void RequestLineParse() //解析
		{
			//GET //index.html http/1.1
			stringstream ss(request_line);
			ss >> method >> uri >> version;
			Util::StringToUpper(method);
			cout << "method: " <<method<<endl;
			cout <<"uri "<<uri<<endl;
			cout <<"version: " << version<<endl;
		}
		void RequestHeaderParse()	//对header的解析
		{
			vector<string> v;
			Util::TransfromToVector(request_header,v);

			auto it =v.begin();
			for(;it!=v.end();it++)
			{
				string k;
				string v;
				Util::MakeKV(*it,k,v);
				//header_kv.insert(make_pair<string,string>(k,v));
                header_kv.insert(make_pair(k,v));
			}
		}
		bool IsNeedRecv()
		{
			return method == "POST";
		}
		int GetContentLength()
		{
			auto it = header_kv.find("Content-Length");
			if(it==header_kv.end())
			{
				return -1;
			}
			return Util::StringToInt(it->second);
		}
		~HttpRequest()
		{

		}
};

class HttpResponse{
	private:
		string response_line;
		string response_header;
		string response_blank;
		string response_body;
	public:
		HttpResponse():response_blank("\n")
		{
			}
		~HttpResponse()
		{
			}

};

class EndPoint{	//远端
	private:
		int sock;
	public:
		EndPoint(int sock)
		{

		}
		int RecvLine(string &line)	//\n \r \r\n  ->\n
		{
			char c = 'X';
			while(c !='\n'){
				ssize_t s = recv(sock,&c,1,0);
				if(s>0)
				{
					if(c == '\r')
					{
						if(recv(sock,&c,1,MSG_PEEK) > 0)
						{
							if(c == '\n')
							{
								recv(sock,&c,1,0);
								}
							else
							{//\r
								c == '\n';
								}
						}
						else
						{
							c = '\n';
							}
					}
					line.push_back(c);
				}

				else{
					c = '\n';
					line.push_back(c);

				}


			}
			return line.size();

		}
		void RecvRequestLine(HttpRequest *rq)
		{
			RecvLine(rq -> GetRequestLine()); //\n \r \r\n -> \n

		}
		void RecvRequestHeader(HttpRequest *rq)
		{
			string &rh = rq->GetRequestHeader();
			do{
			    string line = "";
			    RecvLine(line);
			    if(line == "\n")
			    {
				    break;
				}
			    rh += line;
			}while(1);
		}
		void RecvRequestBody(HttpRequest *rq)
		{//读request
			int len = rq->GetContentLength();
			string &body = rq->GetRequestBody();
            char c;
			while(len--)
			{
				if(recv(sock,&c,1,0)>0)
				{
					body.push_back(c);
				}

			}
		}
		~EndPoint()
		{
			}
};

class Entry{
	public:
	    static void *HandlerRequest(void *args)	//处理请求
	    {

		    int *p = (int*)args;
		    int sock = *p;
		    EndPoint *ep = new EndPoint(sock);
		    HttpRequest *rq = new HttpRequest();
		    HttpResponse *req = new HttpResponse();
			//1.通过endpoint读取请求，并构建request
			//2.分析request，得出具体细节
			//3.构建response
			//4.通过endpoint返回response，最终完成请求/响应。close（sock)
			//5.步骤可以交叉进行
			//


		    ep->RecvRequestLine(rq);
		    rq->RequestLineParse();

		    if(!rq -> MethodIsLegal())
		    {
			    //非法方法
			goto end;

			}
			ep->RecvRequestHeader(rq);
			rq->RequestHeaderParse();
			if(rq->IsNeedRecv())
			{
				ep->RecvRequestBody(rq);

			}

end:
		    delete rq;
		    delete req;
		    delete ep;
		    delete p;
		    }
};
