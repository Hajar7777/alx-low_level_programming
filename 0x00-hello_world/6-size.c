#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: printing size of various types
 *
 *Return: Always 0(Success)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
