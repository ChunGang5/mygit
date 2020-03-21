#pragma once
#include"Protocol.hpp"
#include"thread_pool.hpp"
class Socket
{	
	private:
		int lsock;
		int port;
	public:
		Socket(int _port)
			:port(_port)
			,lsock(-1)
		{}
		void _Socket()
		{	
			lsock=socket(AF_INET,SOCK_STREAM,0);
			if(lsock<0)
			{
				cerr<<"socket error"<<endl;
				exit(2);
			}
		}
		void Bind()
		{
			struct sockaddr_in local;
			local.sin_family=AF_INET;
			local.sin_port=htons(port);
			local.sin_addr.s_addr=htonl(INADDR_ANY);
			if(bind(lsock,(struct sockaddr*)&local,sizeof(local))<0)
			{
				cerr<<"bind error"<<endl;
				exit(3);
			}
		}
		void Listen()
		{
			if(listen(lsock,10)<0)
			{
				cerr<<"listen error"<<endl;
				exit(4);
			}
			int	opt=1;
			setsockopt(lsock,SOL_SOCKET,SO_REUSEADDR,&opt,sizeof(opt));				
		}
		int Accept()
		{
			struct sockaddr_in peer;
			socklen_t len=sizeof(peer);
			int sock = accept(lsock,(struct sockaddr*)&peer,&len);
			if(sock<0)
			{
				cerr<<"accept error"<<endl;
				exit(5);
			}
			return sock;
		}
		~Socket()
		{
			if(lsock>=0)
				close(lsock);
		}
};

#define DEFAULT_PORT 9090
class HttpServer
{
	private:
		Socket sock;
		Threadpool* tp;
	public:
		HttpServer(int _port=DEFAULT_PORT)
			:sock(_port)
		{}
		void InitHttpServer()
		{		
			sock._Socket();
			sock.Bind();
			sock.Listen();
			tp=new Threadpool(8);
			tp->InitThreadpool();
		}
		void Start()
		{
			for(;;)
			{
				int fd=sock.Accept();
				if(fd>=0)
				{
					cout<<"get a new link..."<<endl;
					pthread_t tid;
					int* p=new int(fd);	
					Task t(p,Entry::HanderRequest);
					tp->PushTask(t);
					//pthread_create(&tid,nullptr,Entry::HanderRequest,p);
				}

			}
		}
		~HttpServer()
		{}

};
