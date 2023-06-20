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

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a >= 9 && b >= 9)
				break;
			_putchar(a * b);
			_putchar(32);
			_putchar(44);
			_putchar('\n');
		}
	}
}
