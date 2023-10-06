#include "main.h"
/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array containg arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int file_read, file_from, file_to, write_to_file, close_ff, close_ft;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_read = 1024;
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
	close_ff = close(file_from);
	if (close_ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_ft = close(file_to);
	if (close_ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
