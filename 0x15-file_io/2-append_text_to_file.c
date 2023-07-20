#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 0n sucess -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		o = open(filename, O_RDWR || O_APPEND);
		w = write(o, text_content, strlen(text_content));
		if (o == -1 || w == -1)
			return (-1);
		return (1);
	}
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (-1);
	return (1);
}
