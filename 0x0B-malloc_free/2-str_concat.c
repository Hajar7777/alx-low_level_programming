#include "main.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings
*
* @s1 : pointer
* @s2 : pointer
*
* Return: concats s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *concate;
	int i;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		b++;
	concate = malloc(sizeof(char) * (i + b + 1));
	if (concate == NULL)
		return (NULL);
	i = b = 0;
	while (s1[i] != '\0')
	{
		concate[i] = s1[i];
		i++;
	}
	while (s2[b] != '\0')
	{
		concate[i] = s2[b];
		i++;
		b++;
	}
	concate[i] = '\0';
	return (concate);
}
