#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: name of file to be read
 * @letters: number of letters it should print
 * Return: actual number of letters it could print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, a, w;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	a = read(f, str, letters);
	w = write(STDOUT_FILENO, str, a);
	if (f == -1 || a == -1 || w == -1 || w != a)
	{
		free(str);
		return (0);
	}
	free(str);
	close(f);
	return (w);
}
