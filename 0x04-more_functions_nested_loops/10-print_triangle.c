#include "main.h"
/**
* print_triangle - prints a triangle followed by a new line.
*
* @size : number of triangles/ number of lines
*
* Return : empty
*/
void print_triangle(int size)
{
	int x, v, k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (v = size - x; v > 1; v--)
	{
	_putchar(32);
	}
	for (k = 0; k <= x; k++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
