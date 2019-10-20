#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>

void Usage()
{
	printf("usage: ./server [ip] [port]\n");

}
int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		Usage();
		return 1;
	}

	int fd = socket(AF_INET, SOCK_STREAM, 0);
	if(fd < 0)
	{
		perror("socket create error!\n");
		return 1;
	}
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr(argv[1]);
	addr.sin_port = htons(atoi(argv[2]));

	int ret = bind(fd, (struct sockaddr*)&addr, sizeof(addr));
	if(ret < 0)
	{
		perror("bind error!\n");
		return 2;
	}
	for( ; ; )
	{
		struct sockaddr_in client_addr;
		socklen_t len = sizeof(client_addr);
		listen(fd, 5);
		int client_fd = accept(fd, (struct sockaddr*)&client_addr, &len);
		if(client_fd < 0)
		{
			perror("accept error!\n");
			continue;
		}
		
		char input_buf[1024];
		ssize_t read_size =read(client_fd, input_buf, sizeof(input_buf)-1);
		if(read_size < 0)
		{
			return 4;
		}
		printf("[Request] %s ", input_buf);
		char buf[1024];
		const char* hello = "<h1> Hello world!</h1>";
		sprintf(buf, "HTTP/1.0 200 OK\nContent-Length:%1u\n\n%s", strlen(hello),hello);
		write(client_fd, buf, strlen(buf));
		
	}
	return 0;
}
