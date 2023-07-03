#include "main.h"
/**
* _strstr - function that locates a substring
*
* @haystack : pointer
*
* @needle : pointer
*
* Return: Returns a pointer to the beginning of the located substring
* or 0 if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first = *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
			return (haystack);
	}
	return (0);
}
