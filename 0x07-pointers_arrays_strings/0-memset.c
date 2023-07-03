#include "main.h"
/**
* _memset - function that fills
* memory with a constant byte
*
* @s : char
*
* @b : char
*
* @n : unsigned int
*
* Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; n > 0; k++, n--)
	{
		s[k] = b;
	}
	return (s);
}
