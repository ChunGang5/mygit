#include <iostream>
#include "ProlocolUtil"
using namespace std;

class HttpServer{
	private:
		int listen_sock;
		int port;
	public:
		HttpServer();
		void InitServer();

		~HttpServer();
	

	
	
};
