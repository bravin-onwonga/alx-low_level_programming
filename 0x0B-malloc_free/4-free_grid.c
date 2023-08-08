#include "main.h"

/**
  * free_grid - frees memory held by 2D array
  *
  * @height: rows of array
  * @grid: double pointer to array
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
