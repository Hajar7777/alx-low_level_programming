#include "main.h"






















































/**
* print_binary - prints BINARY equivalnt of DEC NUM
*
* @n: unsi long int NUM to BE printED in binaRy
*/
void print_binary(unsigned long int n)
{
	int ika, count = 0;
	unsigned long int current;

	for (ika = 63; ika >= 0; ika--)
	{
		current = n >> ika;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
