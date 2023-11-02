#include "main.h"

/**
 * array_range - create an array of range min, max
 *
 * @min: lowest int
 * @max: highest int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int diff, i, temp;

	if (min > max)
		return (NULL);

	diff = (max - min) + 1;

	arr = malloc(sizeof(int) * diff);

	if (arr == NULL)
		return (NULL);

	temp = min;
	i = 0;
	while (temp <= max)
	{
		arr[i] = temp;
		temp++;
		i++;
	}

	return (arr);
}
