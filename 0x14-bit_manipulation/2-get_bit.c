#include "main.h"

/**
 * get_bit - get the bit at an index
 *
 * @n: integer
 * @index: index of bit required
 * Return: 1 if bit is '1' or '0'
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	while (index > 0)
	{
		n >>= 1;
		index--;
	}

	return (n & 1);
}
