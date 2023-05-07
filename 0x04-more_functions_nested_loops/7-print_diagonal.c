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
			if (x == m)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if ( n > 0)
		break;
	_putchar('\n');
}
