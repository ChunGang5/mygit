#include"udpClient.hpp"
#include<iostream>

void Usage(std::string proc)
{
	std::cout << proc<< "seve_ip servrr_port" << std::endl;
}
int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		Usage (argv[0]);
		exit(1);
	}
	Client *ct = new Client(argv[1], atoi(argv[2]));

	ct -> InitClient();
	ct->Run();
	delete ct;
	
	std::cout<< "hello client" << std::endl;
	return 0;
}
