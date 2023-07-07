#include "main.h"
/**
* _memcpy - function that copies memory area
*
* @dest : destination pointer
*
* @src : source pointer
*
* @n : unsigned int
*
* Return: pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
