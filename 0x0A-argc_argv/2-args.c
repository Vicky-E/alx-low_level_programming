#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
