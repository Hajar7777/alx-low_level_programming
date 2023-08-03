#include "main.h"

















































/**
* binary_to_uint - convertS BINARY NUM to unsigneD iNt
*
* @b: string HAVING binary NUM
*
* Return: the converTed NUM
*/
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[h] - '0');
	}

	return (dec_value);
}
