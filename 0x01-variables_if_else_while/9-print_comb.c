#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: On sucess 0
 */
int main(void)
{	int x;

	for (x = 0; x <= 9; x++)
	{

		putchar('0' + x);
		putchar(',');
	
	}
	return (0);
}
