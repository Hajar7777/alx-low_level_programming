#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
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
	int i;
	unsigned int k, m = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (k = 0; k < strlen(c); k++)
			{
				if (c[k] < 48 || c[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			m += atoi(c);
			c++;
		}
		printf("%d\n", m);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
