#include "main.h"

/**
 * set_bit - sets bit at index to one
 *
 * @n: integer
 * @index: index in binary to convert
 * Return: 1 (success); otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	ulint m, temp;

	temp = *n;

	if (index > 32)
		return (-1);

	m = 1;
	m <<= index;

	temp = temp | m;

	*n = temp;
	return (0);
}
