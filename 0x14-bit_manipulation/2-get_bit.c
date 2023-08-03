#include "main.h"













































/**
* get_bit - returns VAL of a bit at an INDEX in DEC NUM
*
* @n: NUM to BE searchED
* @index: INDEX of the bIt
*
* Return: vAl of THE BiT
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
