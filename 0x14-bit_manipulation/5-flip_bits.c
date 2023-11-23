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
	unsigned int countBits_n = 0, countBits_m = 0, i, count = 0;

	if (n & 1 != m & 1)
		count++;

	for (i = 0; i <= 32; i++)
	{
		countBits_n = (n >> 1 & 1 ? 1 : 0);
		countBits_m = (m >> 1 & 1 ? 1 : 0);
		n >>= 1;
		m >>= 1;

		if (countBits_n != countBits_m)
			count++;

		if (m == 0 && n == 0)
			break;
	}

	return (count);
}
