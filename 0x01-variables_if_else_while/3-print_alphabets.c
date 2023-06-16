#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0(Success)
 */
int main(void)
{
	int n = 65;
	int m = 97;

	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	while (m  <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
