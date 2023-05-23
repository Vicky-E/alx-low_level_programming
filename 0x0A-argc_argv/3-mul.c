#include <stdio.h>
/**
 * main - multiplies two numbers
 * @a: integer
 * @b: integer
 * Return: 0 on sucess
 */
int main(int argc,int a, int b)
{
	int c;

	if (argc < 2)
	{
		printf("\n Error");
		return (1);
	}
	c = a * b;
	printf("%d\n", c);
	return (0);
}
