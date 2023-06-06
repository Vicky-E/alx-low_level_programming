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
	int i, sum, s2;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i];
		a += size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		s2 = s2 + a[i];
		a -= size;
	}
	printf("%d %d\n", sum, s2);
}
