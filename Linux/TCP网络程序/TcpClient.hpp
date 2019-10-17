#include<iostream>
#include<string>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<cstring>
#include<netinet/in.h>
#include<arpa/inet.h>

using namespace std;
class TcpClient
{
	private:
		int sock;
		string ip;
		int port;
	public:
		TcpClient(string _ip,int _port):ip(_ip),port(_port)
		{
			
			sock = -1;
		}
		void InitClient()
		{
			sock = socket(AF_INET, SOCK_STREAM, 0);
			if(sock < 0)
			{
				cout << "socket creat error" << endl;
				exit(2);
			}
		}
		void Run()
		{
			struct sockaddr_in server;
			server.sin_family = AF_INET;
			server.sin_addr.s_addr = inet_addr(ip.c_str());
			server.sin_port = htons(port);
			
			if(connect(sock,(struct sockaddr*)&server, sizeof(server)) < 0)
			{
				cout << "connect error" << endl;
				return;
			}
			string massage;
			char buf[1024];
			while(1)
			{
				cout << "Please Enter" <<endl;
				cin >> massage;
				write(sock, massage.c_str(),massage.size());
				size_t s = read(sock, buf, sizeof(buf) - 1);
				if(s > 0)
				{
					buf[s] = 0;
					cout << "server echo###" << buf << endl;

				}
			}

		}
		~TcpClient()
		{
			if(sock > 0)
			{
				close(sock);
			}
		}
};
