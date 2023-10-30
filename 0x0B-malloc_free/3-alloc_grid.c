#include "main.h"

/**
 * alloc_grid - allocated memory to a 2D array
 *		and initializes it to 0
 *
 * @width: size of column
 * @height: number of rows
 * Return: pointer to this initialized array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			while (i > 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (arr);
}
