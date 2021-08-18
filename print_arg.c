#include <stdio.h>

/**
 * main - Entry point
 * @ac:first argument
 * @av:second argument
 * Return:Always 0 - SUCCESS
 */

int main(int ac, char **av)
{
	int i = 0;
	(void) ac;

	while (av[i])
	{
		printf("\n");
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
