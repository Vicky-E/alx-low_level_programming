#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of f file
 * @text_content: text to be appended
 * Return: 1 on sucess, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	bytes_written = write(file, text_content, strlen(text_content));
	if (bytes_written == -1)
		return (-1);
	close(file);
	return (1);
}
