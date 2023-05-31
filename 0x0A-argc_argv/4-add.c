#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < '0' || (atoi(argv[i]) > '9'))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
