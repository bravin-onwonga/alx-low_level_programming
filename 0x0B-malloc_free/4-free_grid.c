#include "main.h"

/**
 * free_grid - frees a 2D array
 *
 * @grid: 2D grid
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
