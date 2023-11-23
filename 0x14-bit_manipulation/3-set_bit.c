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
	ulint value;
	unsigned int i;

	if (index > 32)
		return (-1);

	i = 0;
	value = 1;
	while (i < index)
	{
		value = value * 2;
		i++;
	}

	*n += value;
	return (1);
}
