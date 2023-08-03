#include <unistd.h>
#include "main.h"

















































/**
* _putchar - WriTes CHAR c tO stdout
*
* @c: CHAR to BE  printED
*
* Return: SUcceSs 1
* ERROR -1 and errno is TO BE set apprOpriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
