#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
*
* @n: number of lines
*
* Return: empty
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		_putchar(32);
	}
		_putchar(92);
		_putchar('\n');
}
