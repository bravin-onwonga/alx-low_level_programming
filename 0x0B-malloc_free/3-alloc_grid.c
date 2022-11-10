#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *@width: number of columns
 *@height: number of rows
 *
 *Return: pointer to array, NULL if height or width is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * width);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(m[i]);
			}
		free(m);
		return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		m[i][j] = 0;
	return (m);
}
