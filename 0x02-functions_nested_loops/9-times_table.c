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
	int y = 0;

	while (y < 10)
	{
		for (x = 0; x < 10; x++)
		{
			z = (x * y);
<<<<<<< HEAD
			if ( z > 9)
=======

			if (z > 9)
>>>>>>> 9edb3d5560d9cc51f071b05ea74fd916b7af8199
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
				_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		y++;
	}
}
