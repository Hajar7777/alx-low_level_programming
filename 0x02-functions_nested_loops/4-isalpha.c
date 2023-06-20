#include "main.h"
/**
* _isalpha - checks for letters puts 1 if input is a letter and 0 if not.
*
* @c : an ASCII char
*
* Return: returns 1 if c is a letter returns 0 if not
*/
int _isalpha(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
