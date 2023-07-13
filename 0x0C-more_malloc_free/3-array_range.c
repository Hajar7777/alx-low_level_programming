#include "main.h"

/**
* *array_range - creates an array of integers
*
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *p;
	int k, siz;

	if (min > max)
		return (NULL);

	siz = max - min + 1;

	p = malloc(sizeof(int) * siz);

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		p[k] = min++;

	return (p);
}
