#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @a: integer
 * @b: integer
 * Return: 0 on sucess
 */
int main (int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc < 4) 
	{
		printf("\n Error");
		return (1);
	}
	a = atoi(argv[2]);
	b = atoi(argv[3]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
