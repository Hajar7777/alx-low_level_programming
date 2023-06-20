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
	if ((c >= 57 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
