#include "main.h"
/**
* *malloc_checked - function that
* allocates memory using malloc
*
* @b : unsigned int
*
* Return: to the allocated memory or NULL
*/
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
	{
		exit(98);
	}
	return (n);
}
