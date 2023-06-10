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
	int i;

	if (argc == 1)
		printf("0");
	else if (argc > 1)
		printf("%d\n", argc);
	return (0);
}
