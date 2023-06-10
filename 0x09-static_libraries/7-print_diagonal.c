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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < n; m++)
		{
			for (x = 0; x <= m; x++)
			{
				if (x == m)
					_putchar('\\');
				else
					_putchar(' ');
			}
			if (m == n - 1)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
