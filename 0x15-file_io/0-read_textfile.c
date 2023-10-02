#include "main.h"
/**
 * read_textfile - reads and prints text from a file
 * @filename: file to be read from
 * @letters: number of letters it should print
 * Return: actual number it could be print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open, file_read;
	ssize_t no_of_bytes;
	char buff[1024];

	if (filename == NULL)
		return (0);
	file_open = open(filename, O_RDWR);
	file_read = read(file_open, buff, letters);
	if (file_read == -1)
		return (0);
	no_of_bytes = write(STDOUT_FILENO, &buff, letters);
	if (no_of_bytes == -1 || no_of_bytes != letters)
		return (0);
	return (no_of_bytes);
}
