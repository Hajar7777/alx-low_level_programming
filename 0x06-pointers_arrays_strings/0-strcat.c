#include "main.h"
/**
* _strcat - function that concatenates
* two strings
*
* @src : char  pointer to source input
*
* @dest : char pointer to destination input
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, i1;

	i = 0;

	while (dest[i])
		i++;

	for (i1 = 0; src[i1]; i1++)

		dest[i] = src[i1++];
	i++;

	return (dest);
}
