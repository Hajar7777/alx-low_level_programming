#include "main.h"
/**
* string_toupper - change all lowercase to uppercase
* @str : pointer
*
* Return: str
*/
char *string_toupper(char *str)
{
	int b;

	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] >= 97 && str[b] >= 122)
			str[b] = str[b] - 32;
		b++;
	}
	return (str);
}
