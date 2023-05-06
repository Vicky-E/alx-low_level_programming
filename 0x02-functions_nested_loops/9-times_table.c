#include <unistd.h>
#include "main.h"
/**
 * times_table - prints multiplication table
 *
 * Return: 0
 */
void times_table(void)
{	int x;

	int z;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			z = (x * y);
			_putchar((z / 10) + '0');
			if ( z > 9)
			{
				_putchar('0' + (z / 10));
				_putchar((z % 10) + '0');
				if (x == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (z % 10));
				if (x == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
