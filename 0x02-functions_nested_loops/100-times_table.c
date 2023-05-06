#include <unistd.h>
#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: integer value of n
 * Return:nothing
 */
void print_times_table(int n)
{
	int i;
	int x;
	int z;

	for (x = 0; x < (n + 1); x++)
	{
		if (n < 0 || n > 15)
			break;
		_putchar(0 + '0');
		_putchar(',');

		for (i = 1; i < n; i++)
		{
			z = x * i;
			if (z > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (i == n)
					break;
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((z % 10) + '0');
				if (i == n)
					break;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
