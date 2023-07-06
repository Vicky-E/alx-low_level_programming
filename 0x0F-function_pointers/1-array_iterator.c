#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes an action on each element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
