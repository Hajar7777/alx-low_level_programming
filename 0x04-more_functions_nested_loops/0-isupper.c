#include <ctype.h>
#include <unistd.h>
#include "unistd.h"
#include "main.h"
/**
* _isupper - checks for uppercase character.
*
* _putchar - writes the character c to stdout
*
* @c : ASCII char
*
* Return: returns 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
