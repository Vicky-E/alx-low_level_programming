#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
			break;
		printf("%s\n", argv[i]);
	}
}
