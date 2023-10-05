#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written to file
 * Return: 1 on sucess, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int create_file, fd, bytes = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[bytes] != '\0')
	{
		bytes++;
	}
	create_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (create_file == -1)
		return (-1);
	fd = write(create_file, text_content, bytes);
	if (fd == -1)
		return (-1);
	close(create_file);
	return (1);
}
