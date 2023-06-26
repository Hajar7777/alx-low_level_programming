#include "main.h"
/**
  * print_rev - prints aa string in rev
  *
  * @s : char
  *
  * Return : empty
  */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
