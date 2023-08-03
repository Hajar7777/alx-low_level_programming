#include "main.h"

































/**
* flip_bits - counts the NUM of bIts to BE changED
* to gET from 1 NUM to anotHER
*
* @n: 1st NUM
* @m: 2nd NUM
*
* Return: NUM of bits to chAnge
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int jik, countng = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (jik = 63; jik >= 0; jik--)
	{
		current = exclusive >> jik;
		if (current & 1)
			countng++;
	}

	return (countng);
}
