#include "main.h"
/**
 * read_textfile - reads and prints text from a file
 * @filename: file to be read from
 * @letters: number of letters it should print
 * Return: actual number it could be print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open;
	ssize_t bytes_written, bytes_read;
	char *buffer = malloc(letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(file_open, buffer, letters);
	if (bytes_read == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	close(file_open);
	return (bytes_written);
}
