#include "main.h"
/**
* print_chessboard - function that prints the chessboard
*
* @a : array
*
* Return: always 0(Success)
*/
void print_chessboard(char (*a)[8])
{
	int k;
	int o;

	for (k = 0; k < 8; k++)
	{
		for (o = 0; o < 8; o++)
			_putchar(a[k][o]);
		_putchar('\n');
	}
}
