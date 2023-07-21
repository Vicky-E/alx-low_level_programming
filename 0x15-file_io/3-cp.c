#include "main.h"
/**
 * main - copies from one file to another
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int o, c, r, w, cl, cll;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (argc != 2)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	o = open(argv[0], O_RDONLY);
	c = open(argv[1], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(o, buffer, 1024);
	w = write(c, buffer, sizeof(buffer));
	if (o == -1 || r == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
	}
	if (c == -1 || w == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
	}
	cl = close(o);
	cll = close(c);
	if (cl == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
	}
	if (cll == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", c);
	}
	return (0);
}
