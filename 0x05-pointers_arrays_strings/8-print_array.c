#include <stdio.h>
#include "main.h"
/**
 * print_array - prints an array of n elements
 * @a: array
 * @n: number of elements of an array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i++])
	{
		if (i < 0 || i > n)
			break;
		printf("%d", a[i]);
		if (i == (n - 1))
			break;
		printf(",");
		printf(" ");
	}
	_putchar('\n');
}
