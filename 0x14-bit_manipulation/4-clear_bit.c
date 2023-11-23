#include "main.h"

unsigned long int binary_to_ulint(char *b);

/**
 * clear_bit - sets bit at index to 0
 *
 * @n: integer
 * @index: index in binary to convert
 * Return: 1 (success); otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	ulint num, temp;
	int i;
	char *bitarr;

	temp = *n;

	if (index > 64)
		return (-1);

	i = 63;
	bitarr = malloc(sizeof(char) * 64);

	while (i >= 0)
	{
		bitarr[i] = (temp & 1 ? '1' : '0');
		temp >>= 1;
		i--;
	}

	bitarr[63 - index] = '0';
	num = binary_to_ulint(bitarr);

	*n = num;

	free(bitarr);
	return (0);
}

/**
 * binary_to_ulint - converts binary to int
 *
 * @b: pointer to binary string
 * Return: converted int (success); otherwise 0
 */

unsigned long int binary_to_ulint(char *b)
{
	unsigned long int n;
	unsigned long int value = 1;
	int i = 0, len = 63;

	i = len;
	while (i > 0)
	{
		if (b[i] == '1')
		{
			n = n + value;
		}
		value = value * 2;
		i--;
	}
	return (n);
}
