#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to be written to file
 * Return: 1 on sucess -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int c, w, len;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);
	c = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (c == -1)
		return (-1);
	w = write(filename, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	close(c);
	return (1);
}
