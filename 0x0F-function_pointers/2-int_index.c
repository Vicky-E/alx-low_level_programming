#include <unistd.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer to compare values
 * Return: index of first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	while (size > 0)
	{
		cmp(*array);
		if (cmp != 0)
			return (i);
		array++;
		i++;
		size--;
	}
	return (-1);
}
