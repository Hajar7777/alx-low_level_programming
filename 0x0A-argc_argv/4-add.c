#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
*
* @argc : int
* @argv: pointer
*
* Return: always 0(Success)
*/
int main(int argc, char *argv[])
{
	int m = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c < '9')
				return (printf("Error\n"), 1);
		m += atoi(argv[argc]);
	}
	printf("%d\n", m);
	return (0);
}
