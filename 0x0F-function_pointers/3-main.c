#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - Prints the result of simple operations.
*
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0(Success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int nu1, nu2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nu1 = atoi(argv[1]);
	op = argv[2];
	nu2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && nu2 == 0) || (*op == '%' && nu2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(nu1, nu2));

	return (0);
}
