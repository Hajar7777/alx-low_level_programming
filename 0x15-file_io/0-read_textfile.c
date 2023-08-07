#include <stdlib.h>
#include "main.h"





































/**
* read_textfile- Read TEXT file printed to STDOUT
*
* @filename: TExt fiLe being currently  read
* @letters: NUM of leTTers to READ
*
* Return: w- actual NUM of bytes TO BE read and printed
*        0 IF function fails
*        or filename TURNS OUT TO BE NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t win;
	ssize_t tito;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tito = read(fd, buff, letters);
	win = write(STDOUT_FILENO, buff, tito);

	free(buff);
	close(fd);
	return (win);
}
