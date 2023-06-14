#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_array - create and initializes an array
 * @size: size of array
 * @c: character to be iitialized
 * Return: pointer on sucess or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
