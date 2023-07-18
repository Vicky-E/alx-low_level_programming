#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: name of file to be read
 * @letters: number of letters it should print
 * Return: actual number of letters it could print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	FILE *f;
	char str[letters];

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);
	do {
		str[letters] = fgetc(f);
		if (feof(f))
			break;
		write(STDOUT_FILENO, &str, 1);
		count++;
	} while (1);
	return (count);
}
