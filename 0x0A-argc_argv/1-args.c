#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on sucess
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i = 0;

	while (*argv)
	{
		i++;
		argv++
	}
	printf("%d\n", i);
	return (0);
}
