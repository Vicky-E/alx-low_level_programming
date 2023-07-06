#include <unistd.h>
#include "function_pointers.h"
/**
 * array_iterator - executes an action on each element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
