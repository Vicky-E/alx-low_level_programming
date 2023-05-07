#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int u, w, x, y, z;

	w = 1;
	x = 2;
	printf("%lu", w);
	printf(",");
	printf(" ");
	printf("%lu", x);
	printf(",");
	printf(" ");
	for (y = 0; y < 96; y++)
	{
		z = w + x;
		printf("%lu", z);
		if (y == 95)
		{
			printf(" ");
			break;
		}
		printf(",");
		printf(" ");
		u = x;
		w = u;
		x = z;
	}
	printf("\n");
	return (0);
}
