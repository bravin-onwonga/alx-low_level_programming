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
	unsigned int count;
	char c;

	count = 1;

	while (count < index)
	{
		n = n >> 1;
		count++;
	}
	c = ((n >> 1 & 1) ? '1' : '0');
	return (c == '1');
}
