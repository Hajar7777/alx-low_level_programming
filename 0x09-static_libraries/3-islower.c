#include "main.h"
/**
*_islower - returns 1 if c is lowercase otherwise returns 0
*
* @c : an ASCII char
*
* Return: 1 if the character is lower case 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
