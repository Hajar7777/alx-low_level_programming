#include "main.h"








































/**
* clear_bit - sets VALUE of given BIt to 0
*
* @n: PoiNteR to tHE NUM to BE changED
* @index: INDEX OF the BIT to BE clearED
*
* Return: 1 IF succESS -1 IF failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
