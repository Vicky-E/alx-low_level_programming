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
			z = x * y;
			_putchar(48 + z);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
