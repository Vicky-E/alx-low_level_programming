#include <unistd.h>
#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int size = 8;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i <= 1)
				_putchar(a[i][j]);
			else if (i > 1 && i <= size - 3)
				_putchar(' ');
			else if (i > size - 3)
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
