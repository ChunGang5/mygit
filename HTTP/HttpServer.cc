#include"HttpServer.hpp"
static void Usage(string proc)
{
	cout << "Usage:" << proc << " port" << endl;
}
int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		Usage(argv[0]);
		exit(1);
	}
	int port = 0;
	stringstream ss(argv[1]);
	ss >> port;
	cout << port << endl;
	HttpServer* htp = new HttpServer(port);
	htp->InitHttpServer();
	htp->Start();
	delete htp;
	return 0;
}