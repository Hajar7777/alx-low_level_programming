#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates an array of chars
*
* @size : unsigned int
* @c : char
*
* Return: pointer or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *f;

	unsigned int b;

	f = malloc(sizeof(char) * size);
	if (size == 0 || f == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
		f[b] = c;
	return (f);
}
