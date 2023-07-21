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
	char *buffer, *file_from, *file_to;

	file_from = argv[0];
	file_to = argv[1];
	buffer = malloc(1024);
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o = open(file_from, O_RDONLY);
	c = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (o != EOF)
	{
		r = read(o, buffer, 1024);
		w = write(c, buffer, sizeof(buffer));
	}
	if (o == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	if (c == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	cl = close(o);
	cll = close(c);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
		exit(100);
	}
	if (cll == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %s\n", file_to);
		exit(100);
	}
	free(buffer);
	return (0);
}
