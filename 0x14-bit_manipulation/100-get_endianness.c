#include "main.h"




























































/**
* get_endianness - checks IF a machine is of
* SmAll or BigENDIAN
*
* Return: 0 IF BIG
* 1 IF SMALL
*/
int get_endianness(void)
{
	unsigned int kij = 1;
	char *cle = (char *) &kij;

	return (*cle);
}
