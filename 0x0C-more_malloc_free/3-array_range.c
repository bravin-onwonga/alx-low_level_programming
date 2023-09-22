#include "main.h"

/**
 * array_range - allocates memory for an array
 *			of range (min, max) and initializes it
 *
 * @min: start of range (inclusive)
 * @max: end of range (inclusive)
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *ar;
	int k;

	if (min > max)
		return (NULL);

	ar = malloc(((max - min) + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	k = 0;
	while (min <= max)
	{
		ar[k] = min;
		min++;
		k++;
	}

	return (ar);
}
