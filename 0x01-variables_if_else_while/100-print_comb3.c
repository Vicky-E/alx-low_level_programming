#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: On sucess 0
 */
int main(void)
{
int x = 0;

int y;

for (y = 0; y <= 9; y++)
{
	while(x <= 9)
	{	if (x == y)
			continue;
		putchar('0' + x);
		putchar('0' + y);
		putchar(',');
		putchar(' ');
		x++;
	}
}

	return (0);
}
