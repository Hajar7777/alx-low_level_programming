#include "main.h"
/**
  * times_tables - Prints the 9 times table starting from 0.
  */
void times_tables(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
				if (b == 0)
				{
					_putchar(c + 48);
				}
				if (c < 10 && b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(c + 48);
				}
				else if (c >= 10)
				{
					_putchar(44);
					_putchar(32);
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
	}
}
