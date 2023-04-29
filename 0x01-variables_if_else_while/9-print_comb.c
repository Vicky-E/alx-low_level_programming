#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: On sucess 0
 */
int main(void)
{	int x;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		while(y < 10)
		{	putchar(y);
			putchar(x);
			putchar(',');
			y++;
		}
	}
	return (0);
}
