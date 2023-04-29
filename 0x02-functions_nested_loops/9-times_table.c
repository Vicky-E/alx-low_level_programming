#include <unistd.h>
#include "main.h"
/**
 * times_table - prints multiplication table
 *
 * Return: 0
 */
void times_table()
{	int x = 0;

	int z;
	int y;
	for (y = 0; y < 10; y++)
	{
		while (x < 10)
		{
			z = x * y;
			_putchar('0' + z);
		}
		_putchar('\n');
	}
}
