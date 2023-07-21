#include "main.h"
/**
 * main - copies from one file to another
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int o, c, cl, cll;
	ssize_t r, w;
	char buffer[1024], *file_from, *file_to;

	file_from = argv[1];
	file_to = argv[2];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o = open(file_from, O_RDONLY);
	c = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(o, buffer, sizeof(buffer))) > 0)
	{
		w = write(c, buffer, r);
		if (o == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (c == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	cl = close(o);
	cll = close(c);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
	if (cll == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", c);
		exit(100);
	}
	return (0);
}
