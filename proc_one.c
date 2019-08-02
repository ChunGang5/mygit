#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#define FIFO "fifo"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
	if(mkfifo(FIFO,0644) < 0)
	{
		perror("mkdido");
		return -1;
	}
	
	int fd = open(FIFO, O_RDONLY);
	if(fd < 0)
	{
		perror("open");
		return 2;
	}

	char buf[1024];
	while(1)
	{
		ssize_t s = read(fd, buf, sizeof(buf) - 1);
		if(s > 0)
		{
			buf[s] = 0;
			printf("proc_two : %s",buf);
		}
		else if(s == 0)
		{
			printf("proc_two quit,me too!\n");
			break;
		}
		else
		{
			break;
		}
	}
	close(fd);
	printf("Hello one\n");


}
