#include "main.h"










































/**
* create_file - Creates a CERTAIN FILE
*
* @filename: Pointer to the nAme of the FilE to BE creatED
* @text_content: Pointer to a STRING to BE writTeN to the filE
*
* Return: IF FUnction fails - -1
*         OtherwIsE - 1
*/
int create_file(const char *filename, char *text_content)
{
	int fda, win, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	fda = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	win = write(fda, text_content, ln);

	if (fda == -1 || win == -1)
		return (-1);

	close(fda);

	return (1);
}
