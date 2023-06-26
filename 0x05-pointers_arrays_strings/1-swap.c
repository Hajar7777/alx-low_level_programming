#include "main.h"
/**
  * swap_int - swaps the values of two integers
  *
  * @a : int parametre
  *
  * @b : int parametre
  *
  * Return : empty
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
