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
	x = 0;
	y = 0;

	while (w < 10)
	{
		while (x < 10)
		{
			while (y < 10)
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
				y++;
			}
			x++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}

