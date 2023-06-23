#include "main.h"
/**
* print_diagonal - draws a diagonal line according parameter
*
* @n: number of lines
*
* Return: empty
*/
void print_diagonal(int n)
{
	int s, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (s = 1; s <= n; s++)
	{
	for (k = 1; k <= n; k++)
	{
	_putchar(' ');
	_putchar(92);
	_putchar('\n');
	}
	}
	}
}
