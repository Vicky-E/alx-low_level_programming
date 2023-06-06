#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: square matrix
 * @size: size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int row, sum, col, s;
	a[size][size];
	for (row = 0; row < size; row++)
	{
		sum = sum + a[row][row];
		s = s + a[row][size - row - 1];
	}
	printf("%d %d\n", sum, s);
}
