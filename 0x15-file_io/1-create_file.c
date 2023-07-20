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
	char *buffer;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (-1);
	c = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (c == -1)
	{
		free(buffer);
		return (-1);
	}
	while (text_content != NULL)
	{
		w = write(c, buffer, len);
		if (w == -1)
		{
			free(buffer);
			return (-1);
		}
		text_content++;
	}
	free(buffer);
	close(c);
	return (1);
}
