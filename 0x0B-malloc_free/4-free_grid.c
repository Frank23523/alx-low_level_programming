#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid previously created by alloc_grid function
 * @grid: memory of grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
