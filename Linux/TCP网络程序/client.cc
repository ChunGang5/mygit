#include"TcpClient.hpp"

#include<stdio.h>

void Usage(string proc)
{
	cout<<"Usage: "<< proc <<"Ser__IP Ser_PORT" << endl;
}

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		Usage(argv[0]);
		exit(1);
	}
	TcpClient *tcp = new TcpClient(argv[1],atoi(argv[2]));
	tcp->InitClient();
	tcp->Run();

	delete tcp;

}
