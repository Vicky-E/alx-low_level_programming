#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written to file
 * Return: 1 on sucess, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int create_file, bytes;;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = " ";
	}
	bytes = (strlen(text_content) + 1);
	create_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (create_file == -1)
		return (-1);
	write(create_file, text_content, bytes);
	if ((write(create_file, text_content, bytes)) == -1)
		return (-1);
	close(create_file);
	return (1);
}
