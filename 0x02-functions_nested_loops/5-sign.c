#include "main.h"
/**
* print_sign - checks for the sign of input
*
* @n : integer
*
* Return: return 0 returns 1 and + if positive returns -1 and - if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
