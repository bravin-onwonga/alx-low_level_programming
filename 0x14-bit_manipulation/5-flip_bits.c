#include "main.h"

/**
 * count_extra - counts the extra bits after num is zero
 *
 * @num: integer
 * Return: number of extra bits that are set
*/

unsigned int count_extra(unsigned long int num)
{
	unsigned int count = 0;

	while (num != 0)
	{
		if (num >> 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return (count);
}

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
	unsigned int count = 0, num;
	int i = 0;

	if ((n & 1) != (m & 1))
	{
		count++;
	}

	while (i < 16)
	{
		if (n == 0 && m != 0)
		{
			num = count_extra(m);
			count = count + num;
			break;
		}
		if (m == 0 && n != 0)
		{
			num = count_extra(n);
			count += num;
			break;
		}
		if ((n >> 1) != (m >> 1))
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (count);
}
