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
	if (*argv != NULL)
		printf("%d\n", argc);
	return (0);
}
