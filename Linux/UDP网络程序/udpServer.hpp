#pragma onc

#include<iostream>
#include<sys/types.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<string>
#include<netinet/in.h>
#include<cstring>
using namespace std;
//#include<map>

//std::map<std::string, std::string> dict;

class Server{
	private:
		int sock;
		int port;
		std::string ip;
	public:
		Server(std::string ip_="127.0.0.1", int port_ = 8080):sock(-1),ip(ip_), port(port_)
		{


		}
		void InitServer()
		{
			//dict,insert(std::pair<std::string,std::string>("apple", "苹果"));
			

			sock = socket(AF_INET,SOCK_DGRAM,0);
			if(sock < 0)
			{
				std::cerr << "sockt error" << std::endl;
				exit(2);
			}
			std::cout << "init ... socket create success: " << sock <<std::endl;
			struct sockaddr_in local;
			local.sin_family = AF_INET;
			local.sin_port = htons(port);
			local.sin_addr.s_addr = inet_addr(ip.c_str());
			if(bind(sock,(struct sockaddr*)&local, sizeof(local)) < 0)
			{
				std::cerr<<"bind error"<< std::endl;
				exit(3);
			}
			std::cout<<"bind success"<<sock<<std::endl;
		}
		void Start()
		{
			cout<<"test"<<endl;
			char buf[1024];
			for( ; ; )
			{	
				struct sockaddr_in peer;
				socklen_t len = sizeof(peer);
				ssize_t s = recvfrom(sock, buf, sizeof(buf)-1, 0, (struct sockaddr*)&peer, &len);
				if(s > 0)
				{
					cout<<"get new link"<<endl;
					buf[s] = 0;
					cout<<"Get client #"<<buf<<endl;
					/*std::string key = buf;
					std::string value;
					auto if = dict.find(key);
					if(it != dict.end())
					{
						value = dict[key];
					}
					else
					{
						value = "unknow";
					}
					std::cout<< "client###"<< buf << std::endl;*/
					sendto(sock,buf, strlen(buf), 0,(struct sockaddr*)&peer, len);
					//sendto(sock, value.c_str(), value.size(), 0, (struct sockaddr*)&peer, len);
					
				}
			}
		}
		~Server()
		{
			
		}

};
