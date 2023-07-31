#include "main.h"

/**
  * reverse_array - reverses an array.
  *
  * @a: pointer to first element of array.
  * @n: number of elements in array.
  * @temp - variable to temporarily hold value.
  * @i - integer
  */


void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = temp;
		i++;
		n--;
	}
}
