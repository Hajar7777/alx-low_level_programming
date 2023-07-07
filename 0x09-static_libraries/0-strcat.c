#include "main.h"
/**
* _strcat - function that concatenates
* two strings
*
* @src : char  pointer to source input
*
* @dest : char pointer to destination input
*
* Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
