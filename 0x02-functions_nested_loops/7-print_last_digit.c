#include "main.h"
/**
  * print_last_digit - Prints last digit of input.
  *
  * @m : integer
  *
  * Return: returns the last digit.
  */
int print_last_digit(int m)
{
	int l;

	l = m % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
