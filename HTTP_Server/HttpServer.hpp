#pragma once

#include <iostream>
#include <pthread.h>
#include "Protocol.hpp"
#include "Util.hpp"
using namespace std;

class Sock{
	private:
		int sock;
		int port;
	public:
		Sock(const int &port_):port(port_),sock(-1)	//Sock的构造函数
		{}
		void Socket()
		{
			sock = socket(AF_INET, SOCK_STREAM, 0);
			if(sock < 0)
			{
				cerr << "sock cream error!" << endl;
				exit(2);
			}
			int opt = 1;
			setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));	//保证客户端想访问，服务器挂掉进入timewait
		}
		void Bind()
		{
			struct sockaddr_in local;
			local.sin_family = AF_INET;
			local.sin_addr.s_addr = htonl(INADDR_ANY);	//?参数
			local.sin_port = htons(port);

			if(bind(sock, (struct sockaddr*)&local, sizeof(local)) < 0)
			{
				cerr << "bind error!" << endl;
				exit(3);
			}

		}
		void Listen()
		{
			const int backlog = 5;	//链接队列的长度backog+1
			if(listen(sock, backlog) < 0)
			{
				cerr << "listen error!" << endl;
				exit(4);
			}
		}
		int Accept()
		{
			struct sockaddr_in peer;
			socklen_t len = sizeof(peer);
			int fd = accept(sock, (struct sockaddr*)&peer, &len);
			if(fd < 0)
			{
				cerr << "accept error!" <<endl;
				exit(5);
				return -1;
			}
			else
			{
				cout <<"get a new link......" << endl;
				return fd;
			}
		}
		~Sock()
		{
			if(sock >= 0)
			{
				close(sock);
			}
		}
};
#define DEFAULT_PORT 8080
class HttpServer{
	private:
		Sock sock;
	public:
		HttpServer(int port = DEFAULT_PORT):sock(port)
		{}
		void InitHttpServer()
		{
			sock.Socket();
			sock.Bind();
			sock.Accept();
		}
		void Start()
		{
			for(;;)
			{
				int sock_=sock.Accept();	//创建一个新fd
				if(sock_>=0)
				{
					pthread_t tid;
					int *p = new int(sock_);
					pthread_create(&tid, nullptr,Entry:: HandlerRequest, p);

				}
			}
		}
};
