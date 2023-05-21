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

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i <= 1)
				_putchar(a[i][j]);
			else if (i > 1 && i <= 8 - 3)
				_putchar(' ');
			else if (i > 8 - 3)
				_putchar(a[i][j]);
		}
		if (i == 8 - 1)
			break;
		_putchar('\n');
	}
}a
