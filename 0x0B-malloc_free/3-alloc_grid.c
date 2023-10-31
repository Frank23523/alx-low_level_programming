#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to a 2 dimensional array of integers, else NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (h = i; h >= 0; h--)
				free(grid[h]);

			free(grid);

			return (NULL);
		}
	}



	for (i = 0; i < height; i++)
	{
		for (w = 0; w < width; w++)
			grid[i][w] = 0;
	}

	return (grid);
}
