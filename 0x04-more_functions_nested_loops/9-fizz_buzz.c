#include <stdio.h>

/**
 * main - prints 1-100
 * Return: 0
 */
int main(void)
{
	int n;
	
	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("fizz ");
		else if ((n % 5) == 0)
			printf("buzz ");
		else if (((n % 3) == 0) && ((n % 5) == 0))
			printf("fizzbuzz ");
		else
		{
			printf("%d", n);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
