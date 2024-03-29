#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 *			each element of an array.
 *
 * @array: pointer first ele of int array
 * @size: num of elements in array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
