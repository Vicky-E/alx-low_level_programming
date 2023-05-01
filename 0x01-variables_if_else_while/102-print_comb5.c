#include <stdio.h>
/**
 * main - prints two two digits numbers
 *
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;
	w = 0;

	while (w < 10)
	{
		for (x = 0; x < 10; x++)
		{
			for (y = 0; y < 10; y++)
			{
				for (z = y + 1; z < 10; z++)
				{
					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');
					putchar(',');
					putchar(' ');
				}
			}

		}
		w++;
	}
	putchar('\n');
	return (0);
}
