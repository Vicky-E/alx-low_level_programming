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
	*a = *b;
	*b = a;
}
