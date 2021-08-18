#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry point
 *
 * Return:Always 0 - SUCCESS
 */

int main(void)
{
	char *buffer;
	size_t n;
	ssize_t readed;
	
	buffer = malloc(sizeof(char) * 100);
	printf("$");
	scanf("%s",buffer);
	printf("%s",buffer);
	free(buffer);
	return (0);


}
