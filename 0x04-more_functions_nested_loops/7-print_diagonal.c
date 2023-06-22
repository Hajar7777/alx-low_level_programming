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
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < n; s++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
