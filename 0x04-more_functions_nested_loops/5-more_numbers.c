#include <unistd.h>
#include "main.h"
/**
 * more_numbers - prints multiple numbers
 * Return - nothing
 */
void more_numbers(void)
{
	
	int x;
	int y;

	for (y = 0; y < 11; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
				_putchar(x + '0');
		}
		_putchar('\n');
	}
}
