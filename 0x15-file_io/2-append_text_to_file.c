#include "main.h"












































/**
* append_text_to_file - Appends aDDs text at tHE end of a fiLE
*
* @filename: Pointer to the nAMe of tHE fiLE
* @text_content: String to BE addED to tHE end of tHE fiLE
*
* Return: FUnction fails or filename is NULL - -1
*         tHE fiLE does NOT exist the usER lacks write permissiOns - -1
*         OTheRwise - 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, win, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	win = write(o, text_content, ln);

	if (o == -1 || win == -1)
		return (-1);

	close(o);

	return (1);
}
