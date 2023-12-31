#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: array to  be freed
 * @height: size of 2d array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
