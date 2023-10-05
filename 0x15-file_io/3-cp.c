#include "main.h"
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array containg arguments
 * Return: 0 always
 */

/**
 * close - closes open file
 * @fd: file to be closed
 */
void _close(int fd)
{
	int FD_VALUE = fd;

	close(fd);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
}
int main(int argc, char *argv[])
{
	int file_read, file_from, file_to, write_to_file;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (file_read == 1024)
	{
		file_read = read(file_from, buffer, 1024);
		if (file_from == -1 || file_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		write_to_file = write(file_to, buffer, file_read);
		if (file_to == -1 || write_to_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			
			exit(99);
		}
	}
	_close(file_from);
	_close(file_to);
	return (0);
}
