#include <stdio.h>
/**
 * main - sums up multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int n;
	int i = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			i += n;
	}
	printf("%d\n", i);
	return (0);
}
