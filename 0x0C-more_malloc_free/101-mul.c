#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
* is_digit - checks if a string contains a non-digit char
*
* @s: string to be evaluated
*
* Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
* _strlen - returns the length of a string
*
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
* errors - handles errors for main
*/
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
* main - multiplies two positive numbers
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, k, crry, digt1, digt2, *reslt, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	ln = ln1 + ln2 + 1;
	reslt = malloc(sizeof(int) * ln);
	if (!reslt)
		return (1);
	for (k = 0; k <= ln1 + ln2; k++)
		reslt[k] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		digt1 = s1[ln1] - '0';
		crry = 0;
		for (ln2 = _strlen(s2) - 1; ln2 >= 0; ln2--)
		{
			digt2 = s2[ln2] - '0';
			crry += reslt[ln1 + ln2 + 1] + (digt1 * digt2);
			reslt[ln1 + ln2 + 1] = crry % 10;
			crry /= 10;
		}
		if (crry > 0)
			reslt[ln1 + ln2 + 1] += crry;
	}
	for (k = 0; k < ln - 1; k++)
	{
		if (reslt[k])
			b = 1;
		if (b)
			_putchar(reslt[k] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(reslt);
	return (0);
}
