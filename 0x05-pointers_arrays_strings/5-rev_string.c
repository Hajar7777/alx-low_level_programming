#include "main.h"
/**
  * rev_string - prints a string in reverse
  *
  * @s : string parametre
  *
  * return : empty
  */
void rev_string(char *s)
{
	int b = 0;

	while (s[b])
		b++;
	while (b--)
	{
		_putchar(s[b]);
	}
}
