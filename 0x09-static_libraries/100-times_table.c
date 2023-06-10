#include <unistd.h>
#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: integer value of n
 * Return:nothing
 */
void print_times_table(int n)
{	int i, x, z;

	for (x = 0; x < (n + 1); x++)
	{
		if (n < 0 || n > 15)
			break;
		_putchar(0 + '0');
		if (n == 0)
		{	_putchar('\n');
			break;
		}
		_putchar(',');
		for (i = 1; i < (n + 1); i++)
		{	z = x * i;
			if (z > 99)
			{
				_putchar(' ');
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if (z > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((z % 10) + '0');
			}
			if (i == n)
				break;
			_putchar(',');
		}
		_putchar('\n');
	}
}
