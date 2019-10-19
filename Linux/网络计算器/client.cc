#include "protocol.hpp"

using namespace std;

int main()
{
	int sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock < 0)
	{
		cout << "sock creat error!" << endl;
		exit(1);
	}
	struct sockaddr_in peer;
	peer.sin_family = AF_INET;
	peer.sin_port = htons(8080);
	peer.sin_addr.s_addr = inet_addr("127.0.0.1");
	if(connect(sock, (struct sockaddr*)&peer, sizeof(peer)) < 0)
	{
		cout << "connect error " << endl;
		exit(2);
	}
	
	Request rq;
	Response rsp;
	while(1)
	{
		cout << "Please Enter your op<+ - * / %> or qeit<q>###" <<endl;
		cin >> rq.p;
		if(rq.p == 'q')
		{
			break;
		}
		cout << "please date" <<endl;
		cin >> rq.x;
		cout << "Please data " << endl;
		cin >> rq.y;

		send(sock, &rq, sizeof(rq), 0);
		recv(sock, &rsp, sizeof(rsp), 0);
		cout << "stars: " << rsp.start << endl;
		cout << "sum: "<< rsp.sum << endl;
		

	}
	close(sock);
	return 0;
}
