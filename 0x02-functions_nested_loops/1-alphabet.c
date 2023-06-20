#include "main.h"
/**
* print_alphabet - prints alphabets in lowercase
*
* Return: always 0(Success)
*/
void print_alphabet(void)
{
	int m;

	for (m = 97; m <= 122; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
