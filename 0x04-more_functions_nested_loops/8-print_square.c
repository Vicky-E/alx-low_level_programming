#include <unistd.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: no of rows and columns
 * Return: nothing
 */
void print_square(int size)
{
	int row;
	int c;

	for (row = 0; row < size; row++)
	{
		if (size <= 0)
			break;
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
