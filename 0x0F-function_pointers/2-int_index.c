#include "function_pointers.h"

/**
  * int_index - compares an array ele to an int
  *
  * @array: int array
  * @size: array size
  * @cmp: function pointer
  * Return: index of ele (success); otherwise -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (!size || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(*(array + i));
		if (res)
			return (i);
	}
	return (-1);
}
