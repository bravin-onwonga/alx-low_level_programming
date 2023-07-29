#include "main.h"

/**
  * print_array - prints an array
  *
  * @a: pointer to first element of array
  * @n: size of array
  * @i - integer
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
}
