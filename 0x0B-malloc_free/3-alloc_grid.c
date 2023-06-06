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
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * (height));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			for (h = height - 1; h > 0; h--)
				free(array[h]);
			free(array);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			array[h][w] = 0;
	}
	return (array);
}
