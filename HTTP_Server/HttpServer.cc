#include <iostream>
#include "HttpServer.hpp"
using namespace std;

static void Usage(string proc)
{
	cout <<"Usage: " << proc << "port"<<endl;
	}
int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		Usage(argv[0]);
		exit;
		}
	HttpServer *htp = new HttpServer(atoi(argv[1]));
	htp->InitHttpServer();
	htp->Start();

	delete htp;
	return 0;
}

