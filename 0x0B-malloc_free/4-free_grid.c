#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory arrays of grid
 * @grid: dimensional grids
 * @height: height dimension of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
