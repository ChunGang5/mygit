#pragma once

#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<netinet/in.h>

using namespace std;

class TcpServer
{
	private:
		int listen_sock;
		string ip;
		int port;

	public:
		
		TcpServer(string _ip = "127.0.0.1", int _port = 8080)
			:ip(_ip),port(_port)
		{
			listen_sock = -1;
		}

		void InitServer()
		{
			listen_sock = socket(AF_INET,SOCK_STREAM,0);
			if(listen_sock < 0)
			{
				cerr << "listen_socket error" << endl;
				exit(2);
			}
			struct sockaddr_in local;
			local.sin_family = AF_INET;
			local.sin_addr.s_addr = inet_addr(ip.c_str());
			local.sin_port = htons(port);

			if(bind(listen_sock, (struct sockaddr*)&local, sizeof(local)) < 0)
			{
				cerr << "bind error" <<endl;
				exit(3);
			}

			if(listen(listen_sock, 5) < 0)
			{
				cerr << "listen error" <<endl;
				exit(4);
			}
			
		}
		void ServiceIO(int sock)
		{
			char buf[1024];
			while(1)
			{
				ssize_t s = read(sock, buf, sizeof(buf)-1);
				if(s>0)
				{
					buf[s] = 0;
					cout << "client# " <<buf << endl;
					write(sock, buf, strlen(buf));

				}
				else if (s == 0)
				{
					cout << "client quit..." << endl;
					break;
				}
				else
				{
					cerr << "read error" << endl;
				}
			}
		}
		void Start()
		{
			struct sockaddr_in peer;
			while(true)
			{
				socklen_t len = sizeof(peer);
				int sock = accept(listen_sock, (struct sockaddr*)&peer, &len );
				if(sock < 0)
				{
					cerr << "accept error " << endl;
					continue;
				}
				cout << "make client link" << endl;
				ServiceIO(sock);
				close(sock);
			}
		}
		~TcpServer()
		{

		}
};
