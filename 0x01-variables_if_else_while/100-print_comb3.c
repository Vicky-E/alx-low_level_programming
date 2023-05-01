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
	{	if (x == y)
			continue;
		putchar('0' + y);
		putchar('0' + x);
		putchar(',');
		putchar(' ');
	
	}
	y++;
}

	return (0);
}
