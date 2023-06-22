#include "main.h"
/**
* more_numbers - prints the numbers from 0 to 14 ten times.
*
* return: returns numbers from 0 to 14 10 times
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}
