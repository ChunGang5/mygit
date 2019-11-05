#include<iostream>
#include<stdlib.h>
#include<string>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<pthread.h>
#include<stdio.h>

using namespace std;

void *Routine(void *args)
{
	int *p = (int*)args;

	int sock = *p;
	delete p;
	char request[1024];
	ssize_t s = recv(sock, request, sizeof(request)-1, 0);
	if(s > 0)
	{
		request[s] = 0;
		cout << "----------------------------------" << endl;
		cout << request << endl;
		cout << "----------------------------------" << endl;

		string response = "HTTP/1.0 200 OK\r\n\r\n<html><h1>吕凯纯</h1></html>";

	send(sock, response.c_str(), response.size(), 0);	
	}
	else if(s == 0)
	{
		cout << "client quit" << endl;
	}
	else
	{
		cout << "recv error!" << endl;
	}
	close(sock);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		cout << "Usage:" << argv[0] << "port" << endl;
		return 1;
	}

	int listen_sock = socket(AF_INET, SOCK_STREAM, 0);
	int port = atoi(argv[1]);
	if(listen_sock < 0)
	{
		cout << "socket error" << endl;
		return 2;
	}
	struct sockaddr_in local;
	local.sin_family = AF_INET;
	local.sin_port = htons(port);
	local.sin_addr.s_addr = htonl(INADDR_ANY);

	if(bind(listen_sock, (struct sockaddr*)&local, sizeof(local)) < 0)
	{
		cout << "bind error!" << endl;
		return 3;
	}
	if(listen(listen_sock, 5) < 0)
	{
		cout << "listen error!" << endl;
		return 4;
	}

	for(; ;)
	{
		struct sockaddr_in peer;
		socklen_t len = sizeof(peer);
		int sock = accept(listen_sock, (struct sockaddr*)&peer, &len);
		if(sock < 0)
		{
			cerr << "accept error" << endl;
			continue;
		}

		int *fd = new int(sock);
		pthread_t tid;
		pthread_create(&tid, NULL, Routine, fd);
	}
}
