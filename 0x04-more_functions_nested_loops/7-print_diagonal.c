#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
*
* @n : ASCII char
*
* Return: draws a diagonal line on the terminal
*/
void print_diagonal(int n)
{
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < n; s++)
		{
			_putchar(32);
		}
		_putchar('\n');
	}
}
