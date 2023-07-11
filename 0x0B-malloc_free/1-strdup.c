#include "main.h"
#include <stdlib.h>
/**
* _strdup - function that returns a pointer
* to a newly allocated space in memory
*
* @str : pointer
*
* Return: concat of s1 and s2
*/
char *_strdup(char *str)
{
	char *a;
	int i, m;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		a[m] = str[m];
	return (a);
}
