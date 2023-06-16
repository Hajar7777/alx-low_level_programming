#include <stdio.h>
/**
 *main - main entey paoint**description: counting size
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long long int a;

	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(a));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
