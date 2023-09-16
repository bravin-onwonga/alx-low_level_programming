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
	unsigned int count;
	int i = 64;

	if ((n % 2) != (m % 2))
	{
		count++;
	}

	while (i < 64)
	{
		if ((n >> 1) != (m >> 1))
		{
			count++;
		}
	}
	return (count);
}
