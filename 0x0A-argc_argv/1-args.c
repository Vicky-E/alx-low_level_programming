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
	int i = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (*argv)
		{
			i++;
			argv++;
		}
		printf("%d\n", i);
	}
	return (0);
}
