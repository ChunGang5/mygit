#include"protocol.hpp"
using namespace std;

void *Routine(void *args)
{
	pthread_detach(pthread_self());
	int sock = *(int*)args;
	delete (int*)args;
	Request rq;
	while(1)
	{
		Response rsp = {0,0};
		ssize_t s = recv(sock, &rq, sizeof(rq), 0);
		if(s > 0)
		{
			switch(rq.p)
			{
				case '+':
					rsp.sum = rq.x + rq.y;
					break;

				case '-':
					rsp.sum = rq.x - rq.y;
					break;
				case '*':
					rsp.sum = rq.x * rq.y;
					break;
				case '/':
					if(rq.y == 0)
					{
						rsp.start = 1;
					}
					else{
					rsp.sum = rq.x / rq.y;
					}
					break;
				case '%':
					if(rq.y == 0)
					{
						rsp.start == 2;
					}
					else
					{
					rsp.sum = rq.x % rq.y;
					}
					break;
				default:
					rsp.start = 3;
					break;
			}
			send(sock, &rsp,sizeof(rsp), 0);
		}
		else if(s ==0)
		{
			cout << "client  close!" << endl;
			break;
		}
		else
		{
			break;
		}
		close(sock);
	}
}
int main()
{
	int listen_sock = socket(AF_INET,SOCK_STREAM,0);
	if(listen_sock < 0)
	{
		cout << "listen creat error!" << endl;
		exit(2);
	}
	struct sockaddr_in local;
	local.sin_family = AF_INET;
	local.sin_port = htons(8080);
	local.sin_addr.s_addr = htonl(INADDR_ANY);
	if(bind(listen_sock,(struct sockaddr*)&local,sizeof(local))<0)
	{
		cout << "bind error" << endl;
		exit(3);
	}
	if(listen(listen_sock,5) < 0)
	{
		cerr << "listen error! " << endl;
		exit(4);
	}
	
	struct sockaddr_in peer;
	for( ; ; )
	{
		socklen_t len = sizeof(peer);
		int sock = accept(listen_sock,(struct sockaddr*)&peer,&len );
		if(sock < 0)
		{
			cerr << "accpet error "<< endl;
			continue;
		
		}
		cout <<"get a new link ....."<< endl;
		int *s = new int(sock);
		pthread_t id;
		pthread_create(&id, NULL, Routine, (void*)sock);
		

	}
}
