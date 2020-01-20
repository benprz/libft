#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	char buffer[6] = "hello\0";
	int fd = open("ah", 0);

	read(fd, buffer, 100);
	printf("%s", buffer);
	return (0);
}
