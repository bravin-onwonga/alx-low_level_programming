#include "main.h"

/**
 * print_diagsums - calculate and prints sum of diagonals of array
 *
 * @a: pointer to a array (1D - 2D array)
 * @size: size of square matrix
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		sum = sum + a[((i * size) + j)];
		j++;
		i++;
	}
	printf("%d, ", sum);

	i = 0;
	sum = 0;
	j = (size - 1);
	while (i < size)
	{
		sum = sum + a[((i * size) + j)];
		j--;
		i++;
	}
	printf("%d\n", sum);
}
