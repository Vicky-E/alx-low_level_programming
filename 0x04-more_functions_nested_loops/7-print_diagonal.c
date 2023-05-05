#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x;
	int m;

	for (m = 0; m < n; m++)
	{
		if (n <= 0)
			break;
		for (x = 0; x < n; x++)
		{
			if (x == m && n < 10)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}