#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
	int fd[2]={
		0
	};
	if(pipe(fd) < 0)
	{
		perror("pipe");
		return 1;
	}
	printf("fd[0] : %d\n",fd[0]);
	printf("fd[1] : %d\n",fd[1]);
	
	pid_t id = fork();
	if(id == 0)
	{
		//child  writr
		while(1)
		{
			close(fd[0]);
			sleep(3);
			const char *str = "I am chile...\n";
			write(fd[1],str, strlen(str));
			//close(fd[1]);
			//break;
		}
		exit(0);
	}
	else
	{
		close(fd[1]);
		while(1)
		{
			//父进程并不会每秒钟都在读，而是与子进程保持一致，同步性。
	
			char buf[1024];
			size_t s= read(fd[0], buf,sizeof(buf));
			if(s > 0)
			printf("father : %s\n",buf); 
			else if(s == 0)
			{
				printf("read  pipe EOF,break\n");
				break;
			}
			close(fd[0]);
			break;
		}
		int status = 0;
		waitpid(id, &status, 0);
		printf("code: %d, sig: %d\n",(status>>8)&0xFF,status&0x7F);
	}

}
