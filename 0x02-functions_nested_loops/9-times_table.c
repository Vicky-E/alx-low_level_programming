#include <unistd.h>
#include "main.h"
/**
 * times_table - prints multiplication table
 *
 * Return: nothing
 */
void times_table(void)
{	
	int i;
	int x;
	int z;
	for (x = 0; x < 10; x++)
	{
		_putchar(0 + '0');
		_putchar(',');

		for (i = 1; i < 10; i++)
		{
			z = x * i;
			if (z > 9)
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (i == 9)
					break;
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((z % 10) + '0');
				if (i == 9)
					break;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
