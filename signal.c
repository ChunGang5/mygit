//#include <stdio.h>

//int main()
//{
//	printf("pid is %d\n",getpid());
//	while(1);
//	return 0;
//}


//
#include <stdio.h>
#include <unistd.h>
/*
int main()
{
	int count = 14;
	alarm(1);
	for(;1; count++)
	{
		printf("count = %d\n",count);
	}
	return 0;
}    alarm(num)函数设定一个闹钟，num时间内后向进程发送一个SIGALRM信号，默认处理动作是终止当前进程。
*/


#include <signal.h>

void handler(int sig)
{
	printf("catch a sig : %d\n",sig);
}

int main()
{
	signal(2,handler);
	sleep(1);
	int *p = NULL;
	*p = 100;
	while(1);
	return 0;
}

