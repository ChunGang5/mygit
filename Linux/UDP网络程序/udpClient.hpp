#pragma once
#include<iostream>
#include<sys/types.h>
#include<sys/socket.h>
#include<string>
#include<cstring>
#include<unistd.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<netinet/in.h>
class Client
{
	private:
		int sock;
		std::string peer_ip;
		int peer_port;

	public:
		Client(std::string _ip, int _port):peer_ip(_ip), peer_port(_port)
		{
			sock = -1;

		}
		void InitClient()
		{
			sock = socket(AF_INET, SOCK_DGRAM, 0);
			if(sock < 0)
			{
				std::cerr << "socket error" << std::endl;
				exit(2);
			}

		}
		void Run()
		{	
			bool quit = false;
			std::string message;
			char buf[1024];
			
			while(!quit)
			{
				struct sockaddr_in peer;
				peer.sin_family = AF_INET;
				peer.sin_addr.s_addr = inet_addr(peer_ip.c_str());
				peer.sin_port = htons(peer_port);

				socklen_t len =sizeof(peer);

				std::cout << "Please Enter### ";
				std::cin >>message;

				sendto(sock, message.c_str(), message.size(), 0, (struct sockaddr*)&peer, sizeof(peer));

				ssize_t s = recvfrom(sock, buf, sizeof(buf)-1, 0, (struct sockaddr*)&peer ,&len);
				if(s>0)
				{
					buf[s] = 0;
					std::cout << "server ech### " << buf << std::endl;
				}
			}
		
		}
		~Client()
		{
			
		}
};
