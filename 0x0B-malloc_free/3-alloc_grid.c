#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to two dimensional arrays
 * @width: number of rows
 * @height: number of columns
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w_index, h_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * height * width);
	if (array == NULL)
		return (NULL);
	for (w_index = 0; w_index < width; w_index++)
	{
		for (h_index = 0; h_index < height; h_index++)
		{
			array[width][height] = 0;
		}
		_putchar('\n');
	}
	return(array);
}
