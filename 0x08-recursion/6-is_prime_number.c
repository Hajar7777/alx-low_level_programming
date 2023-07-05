#include "main.h"
#include <stdio.h>
/**
* is_prime_number - function that returns 1 if
* the input integer is a prime number
* otherwise return 0
*
* @n : int
* @secndn : int
* Return: 1 or 0
*/
int check_prime(int n, int secndn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
* check_prime - checks all numbers < n
*
* @n : int
* @secndn : int
*
* Return: int
*/
int check_prime(int n, int secndn)
{

	if (secndn >= n && n > 1)
	{
		return (1);
	}
	else if (n % secndn == 0 && n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, secndn + 1));
	}
}
