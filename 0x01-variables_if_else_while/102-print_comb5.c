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

	while (w < 99)
	{

		for (x = w + 1; x < 100; x++)
		{
			putchar((w / 10) + '0');
			putchar((w % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
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
