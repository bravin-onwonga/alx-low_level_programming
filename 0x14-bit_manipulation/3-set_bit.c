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
	ulint m;

	if (index > 64)
		return (-1);

	m = 1;
	m <<= index;

	*n = *n | m;

	return (0);
}
