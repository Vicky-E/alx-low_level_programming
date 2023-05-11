#include <unistd.h>
#include "main.h"
/**
 * print_triangle - printss triangle using #
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int x;
	int s;

	if (size > 0)
	{
		for (x = size - 1; x >= 0; x--)
		{
			for (s = 0; s < size; s++)
			{
				if (s < x)
					_putchar (' ');
				else
					_putchar('#');
			}
			if (x == 0)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
