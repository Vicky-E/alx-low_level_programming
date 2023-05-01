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

while (y <= 9)
{
	for(x = y + 1; x <= 9; x++)
	{	if (x == y)
			continue;
		putchar('0' + (y % 10));
		putchar('0' + (x % 10));
		if (y == 8 && x == 9)
			continue;
		putchar(',');
		putchar(' ');
	
	}
	y++;
}

	return (0);
}
