#include "udpServer.hpp"

void Usage(std::string proc)
{
	std::cout << proc << "IP" << "PORT" << std::endl;
}
int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		Usage(argv[0]);
		exit(1);
	}
	Server *sp = new Server(argv[1],atoi(argv[2]));
	sp->InitServer();
	sp->Start();
	delete sp;
}
