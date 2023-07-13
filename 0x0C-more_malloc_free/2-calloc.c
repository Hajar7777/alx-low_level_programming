#include "main.h"

/**
* *_memset - fills memory with a constant byte
*
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
* *_calloc - allocates memory for an array
*
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(size * nmemb);

	if (r == NULL)
		return (NULL);

	_memset(r, 0, nmemb * size);

	return (r);
}
