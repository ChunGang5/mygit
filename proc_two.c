#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#define FIFO "fifo"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main()
{
	
	int fd = open(FIFO, O_WRONLY);
	if(fd < 0)
	{
		perror("open");
		return 2;
	}

	char buf[1024];
	while(1)
	{	
		printf("Please Enter#");
		fflush(stdout);
		ssize_t s = read(0, buf, sizeof(buf) - 1);
		if(s > 0)
		{
			buf[s] = 0;
			write(fd, buf, sizeof(buf));
		}
	}
	close(fd);


}
