#include <stdlib.h>
#include "main.h"
/**
 * free_grid = frees a 2D array
 * @grid: 2D array
 * @height: size
 */
void free_grid(int **grid, int height)
{
	int h;
	for(h = height; h >= 0; h--)
		free(grid[h]);
	free(grid);
}
