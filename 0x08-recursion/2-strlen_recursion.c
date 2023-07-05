#include "main.h"
/**
* _strlen_recursion - function that returns
* the length of a string
*
* @s : char
*
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s > '\0')
	{
		m += _strlen_recursion(s + 1) + 1;
	}
	return (m);
}
