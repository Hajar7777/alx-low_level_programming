#include <stdio.h>
#include "main.h"
#include <stdlib.h>























char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Allocates 1024 bytes for a BUFFER
*
* @file: NAME of tHE fILe buffer is storing chars foR
*
* Return: Pointer to tHE newly-allocated buFFER
*/
char *create_buffer(char *file)
{
	char *bufffer;

	bufffer = malloc(sizeof(char) * 1024);

	if (bufffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufffer);
}


















/**
* close_file - Closes THE file descripTORS
*
* @fd: The fIlE descriptor to ClosE
*/
void close_file(int fd)
{
	int charc;

	charc = close(fd);

	if (charc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


















/**
* main - CopIES cONtenTs ofa certain FIle to another
*
* @argc: NUM of argumentS suppLIED to the Program
* @argv: An array of Pointers to tHe arGuments
*
* Return: 0 (succeSS)
*
* Description: argument count incorrect EXIT code 97
* If file_from does not exist OR cannot be read EXIT code 98
* If file_to canNOT be created OR written to EXIT code 99
* If file_to or file_from canNOT be closed EXIT code 100
*/
int main(int argc, char *argv[])
{
	int from, to, rst, win;
	char *bufferr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferr = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rst = read(from, bufferr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rst == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferr);
			exit(98);
		}

		win = write(to, bufferr, rst);
		if (to == -1 || win == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferr);
			exit(99);
		}

		rst = read(from, bufferr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rst > 0);

	free(bufferr);
	close_file(from);
	close_file(to);

	return (0);
}
