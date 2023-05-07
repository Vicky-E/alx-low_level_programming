#include <stdio.h>
/**
 * main - sums up even fibonacci numbers below 4000000
 * Return: 0
 */
int main(void)
{
	unsigned long int u, w, x, y, z, a;

	a = 0;
	w = 1;
	x = 2;

	for (y = 0; y < 48; y++)
	{
		z = w + x;
		if (z % 2 == 0)
		{
			if (z >= 4000000)
				break;
			a += z;
		}
		u = x;
		w = u;
		x = z;
	}
	printf("%lu\n", a);
	return (0);
}
