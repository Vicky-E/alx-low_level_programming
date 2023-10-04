#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written to file
 * Return: 1 on sucess, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int create_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		create_file = open(filename, O_CREAT);
		close(create_file);
		return (1);
	}
	create_file = open(filename, O_CREAT | O_RDWR |O_TRUNC, 0600);
	if (create_file == -1)
		return (-1);
	write(create_file, &text_content, sizeof(text_content));
	if ((write(create_file, &text_content, sizeof(text_content))) == -1)
		return (-1);
	close(create_file);
	return (1);
}
