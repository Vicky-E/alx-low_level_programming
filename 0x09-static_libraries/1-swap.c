#include <unistd.h>
#include "main.h"
/**
 * swap_int - swaps two values
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
