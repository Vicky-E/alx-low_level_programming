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
		else if (n == 0)
		{
			_putchar(' ');
			_putchar(0 + '0');
			break;
		}
		else
		{
			_putchar(0 + '0');
			_putchar(',');
		}

		for (i = 1; i < (n + 1); i++)
		{
			z = x * i;
			if (z > 99)
			{
				_putchar(' ');
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
				if (i == n)
					break;
				_putchar(',');
			}
			else if (z > 9)
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
