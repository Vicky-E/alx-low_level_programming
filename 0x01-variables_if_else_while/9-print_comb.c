#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: On sucess 0
 */
int main(void)
{	int x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		putchar(',');
		putchar(' ');
		x++;
		if (x == 9)
			putchar('0' + x);
	}
	return (0);
}
