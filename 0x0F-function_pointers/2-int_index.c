#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to first element of array
 * @size: size of array
 * @cmp: compares two integers
 * Return: index of int in array; otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}
