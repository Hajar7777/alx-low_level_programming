#include "main.h"
/**
* print_last_digit - prints last digit
*
* @m : integer
*
* Return : l
*/
int print_last_digit(int m)
{
	int l;

	l = m % 10;

	_putchar(l + 48);
	return (l);
}
