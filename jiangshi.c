#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler(int sig)
{
	pid_t id;
	while((id == waitpid(-1,NULL,WNOHANG))>0)
	{
		printf("wait child success: %d\n",id);
	}
	printf("child is qiut! %d\n",getpid());
}
int main()
{
	signal(SIGCHLD,handler);
	pid_t cid;
	if((cid = fork()) == 0)
	{
		printf("chile ：%d",getpid());
		sleep(3);
		exit(1);
	}

	while(1)
	{
		printf("father proc is doing some thing!\n");
		sleep(1);
	}
	return 0;
}
