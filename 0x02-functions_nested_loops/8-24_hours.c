#include <unistd.h>
#include "main.h"
/**
 * jack_bauer - prints every hour and minute of the day
 * Return: none
 */
void jack_bauer()
{
	int h, m;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
	}
}
