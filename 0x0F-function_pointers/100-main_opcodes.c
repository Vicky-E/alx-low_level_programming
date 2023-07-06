#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char op;
	int (*ad)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		op = *(unsigned char *)ad;
		printf("%.2x", op);
		if (i == bytes - 1)
			continue;
		printf(" ");
		ad++;
	}
	printf("\n");
	return (0);
}
