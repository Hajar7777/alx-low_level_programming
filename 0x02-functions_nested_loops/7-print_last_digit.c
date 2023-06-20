#include "main.h"
/**
* print_last_digit - prints last digit
*
* @m : integer
*
* Return : returns the value of last digit
*/
int print_last_digit(int m)
{
	int l = m % 10;

	_putchar(l);
	return (l);
}
