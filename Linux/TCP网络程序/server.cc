#include "TcpServer.hpp"
#include<stdio.h>

void Usage(string proc)
{
	cout<<"Usage: "<< proc <<"IP PORT" << endl;
}

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		Usage(argv[0]);
		exit(1);
	}
	TcpServer *tsp = new TcpServer(argv[1],atoi(argv[2]));
	tsp->InitServer();
	tsp->Start();

	delete tsp;

}
