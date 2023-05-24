#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints argument count
 * @argc: count
 * @argv: vector
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i = -1;

	while (*argv)
	{
		argv++;
		i++;
	}
	argc = i;
	printf("%d\n", argc);
	return (0);
}
