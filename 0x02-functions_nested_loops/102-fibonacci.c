#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;

	w = 1;
	x = 2;
	printf("%d", w);
	printf(",");
	printf(" ");
	printf("%d", x);
	printf(",");
	printf(" ");
	for (y = 0; y < 48; y++)
	{
		z = w + x;
		printf("%d", z);
		if (y == 47)
			break;
		printf(",");
		printf(" ");
		w++;
		x++;
	}
	printf("\n");
	return (0);
}
