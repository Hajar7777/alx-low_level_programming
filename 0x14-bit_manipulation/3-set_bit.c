#include "main.h"













































/**
* set_bit - sEts BIT at a given INDEX to 1
*
* @n: pointER toNUM to BE changeD
* @index: INDEX of  bIt to BE set tO 1
*
* Return: 1 succeSS -1 IF Failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
