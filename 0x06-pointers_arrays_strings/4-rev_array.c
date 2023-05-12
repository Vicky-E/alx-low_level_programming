#include <unistd.h>
#include "main.h"
/**
 * reverse_array - reverses an array of integer
 * @a: array
 * @n: number of elements to be printed
 * Return: nothing
 */
void reverse_array(int *a, int n)
{ 
	int i = 0;
	int s;

	while (a[i])
	{
		i++;
	}
	for (i = n - 1; i >= n / 2; i--)
	{
		s = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = s;
	}
}
