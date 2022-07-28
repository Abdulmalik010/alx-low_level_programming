#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously created by
 * your alloc_grid function.
 *
 * @grid: 2-D array to be freed.
 * @height: Height of the grid.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}

	free(grid);
}
