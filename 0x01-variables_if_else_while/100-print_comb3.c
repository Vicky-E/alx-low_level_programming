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
	for(x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		putchar('0' + y);
		putchar(',');
		putchar(' ');
		x++;
	}
	y++;
}

	return (0);
}
