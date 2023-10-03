#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written to file
 * Return: 1 on sucess, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int create_file, write_to_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		open(filename, O_CREAT);
	create_file = open(filename, O_CREAT | O_RDWR |O_TRUNC);
	if (create_file == -1)
		return (-1);
	write_to_file = write(create_file, &text_content, strlen(text_content));
	if (write_to_file == -1)
		return (-1);
	return (1);
}			
