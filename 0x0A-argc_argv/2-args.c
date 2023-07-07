#include <stdio.h>
/**
* main - entry point
*
* @argc : int
* @argv : pointer
*
* Return: always 0(Success)
*/
int main(int argc, char const **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
