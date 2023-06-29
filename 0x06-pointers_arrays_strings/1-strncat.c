#include "main.h"
/**
  * _strncat -  function that concatenates two strings
  *
  * @dest : pointer to destination
  * @src : pointer to source
  * @n : most bytes from src
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int q;
	int t;

	q = 0;
	t = 0;

	while (dest[q] != 0)
	{
		q++;
	}
	while (t < n && src[t] != '\0')
	{
		dest[q] = src[t];
		q++;
		t++;
	}
	dest[q] = '\0';
	return (dest);
}
