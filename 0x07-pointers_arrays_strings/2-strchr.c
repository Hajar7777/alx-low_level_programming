#include "main.h"
/**
* _strchr - function that locates
* a character in a string
*
* @s : char
*
* @c : char
*
* Return: pointer s
*/
char *_strchr(char *s, char c)
{
	int h;

	for (h = 0; s[h] >= '\0' ; h++)
	{
		if (s[h] == c)
		{
			return (s + h);
		}
	}
	return ('\0');
}
