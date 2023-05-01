#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: On sucess 0
 */
int main(void)
{
int y = 0;

int x;
int z;

while (y <= 9)
{
	for (z = x + 1; z <= 9; z++)
	{
		for (x = y + 1; x <= 9; x++)
		{
                	if (x == y && y == z)
				continue;
			putchar('0' + y);
			putchar('0' + x);
			putchar('0' + z);
			if (y == 7 && x == 8 && z == 9)
				continue;
			putchar(',');
			putchar(' ');

		}
		z++;
	}
	y++;
}
	putchar('\n');
	return (0);
}
