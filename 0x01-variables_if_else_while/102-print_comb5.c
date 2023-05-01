#include <stdio.h>
/**
 * main - prints two two digits numbers
 *
 * Return: 0
 */
int main(void)
{
	int w;
	int x;


	w = 0;

	while (w < 98)
	{

		for (x = w + 1; x < 100; x++)
		{
			putchar(w + '0');
			putchar(' ');
			putchar(x + '0');
			if (w == 98 && x == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
		

	}
	w++;

	putchar('\n');
	return (0);
}
