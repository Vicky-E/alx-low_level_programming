#ianclude <stdio.h>
/**
 * main - prints two two digits numbers
 *
 * Return: 0
 */
int main(void)
{
	int w;
	int x;
	int y;
	int z;

	w = 0;
	x = 0;

	while (w < 10)
	{
		while (x < 10)
		{
			for (y = x + 1; y < 10; y++)
			{
				for (z = x + 1; z < 10; z++)
				{
					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');
					if ((w == 9 && x == 8) && (y == 9 && z == 9))
							continue;
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
