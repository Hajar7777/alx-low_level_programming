#include "main.h"
/**
  * puts_half - prints half the string followed by a new line
  *
  * @str : string parametre
  *
  * Return : empty
  */
void puts_half(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
		;
	w++;
	for (w /= 2; str[w] != '\0'; w++)
	{
		_putchar(str[w]);
	}
	_putchar('\n');
}
