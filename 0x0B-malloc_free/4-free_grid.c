#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 * Return: void
 **/

void free_grid(int **grid, int height)
{
	int dgrid;

	if (grid == NULL || height == 0)
		return;

	for (dgrid = 0; dgrid < height; dgrid++)
		free(grid[dgrid]);

	free(grid);
}
