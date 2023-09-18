#include "main.h"

/**
 * flip_bits - checks how many bits you need to flip
 * to get another number
 *
 * @n: first integer
 * @m: second integer
 * Return: number of flips needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;
	char c;
	char ch;

	if ((n & 1) != (m & 1))
	{
		count++;
	}

	while (i < 16)
	{
		c = ((n >> 1 & 1) ? '1' : '0');
		ch = ((m >> 1 & 1) ? '1' : '0');

		if (c != ch)
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (count);
}
