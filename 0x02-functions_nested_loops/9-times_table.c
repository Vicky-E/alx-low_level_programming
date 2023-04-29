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
	
	while (y < 10 && z != 81)
	{	
		for (x = 0; x < 10; x++)
		{
			z = x * y;
			_putchar('0' + z);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		y++;
	}
}
