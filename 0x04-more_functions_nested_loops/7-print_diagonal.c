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
	for (s = 0; s < n; s++)
	{
	for (k = 0; k < s; k++)
	{
	_putchar(32);/*is equal to ' ' char*/
	}
	_putchar(92);/*is equal to '\' char*/
	_putchar('\n');
	}
	}
}
