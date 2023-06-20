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
		return (1);
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		return (0);
		_putchar(48);
	}
	_putchar('\n');
}
