#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	sigset_t set,oset;
	sigemptyset(&set);
	sigaddset(&set,2);
	sigprocmask(SIG_BLOCK,&set,&oset);
	
	sigset_t pi;
	while(1)
	{
		sigpending(&pi);
		int i = 1;
		for(;i<=31;i++)
		{
			if(sigismember(&pi,i))
			{
				printf("1");
			}
			else
			{
			printf("0");
			}
		}
		printf("\n");
		sleep(1);
	}
}
