#include "main.h"
/**
  * times_tables - Prints the 9 times table.
  *
  * Return: Always 0(Success)
  */
void times_tables(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
				if (b == 0)
				{
					_putchar(c + '0');
				}
				if (c < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
	}
}
