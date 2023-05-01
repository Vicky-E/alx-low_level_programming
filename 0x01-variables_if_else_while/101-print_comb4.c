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
	for (z = y + 1; z <= 9; z++)
	{
		for (x = z + 1; x <= 9; x++)
		{
                	if (z == y && y == x)
				continue;
			putchar('0' + y);
			putchar('0' + z);
			putchar('0' + x);
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
