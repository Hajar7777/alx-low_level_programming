#include "main.h"
/**
* print_alphabet_x10 - prints alphabets ten times
*
* Return: Always 0(Success)
*/
int print_alphabet_x10(void)
{
	int n;
	int m;

	for (n = 0; n <= 10; n++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar(n);
	}
	_putchar('\n');
}
