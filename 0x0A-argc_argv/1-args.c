#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of arguments
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
