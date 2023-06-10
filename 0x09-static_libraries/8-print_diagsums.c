#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: index
 * @size: size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, s2);
}
