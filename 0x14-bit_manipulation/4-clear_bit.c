#include "main.h"

unsigned int binary_to_ulint(char *b);

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

	if (index > 32)
		return (-1);

	i = 31;
	bitarr = malloc(sizeof(char) * 32);

	while (i >= 0)
	{
		bitarr[i] = (temp & 1 ? '1' : '0');
		temp >>= 1;
		i--;
	}

	bitarr[31 - index] = '0';
	num = binary_to_ulint(bitarr);

	*n = num;
	return (0);
}

/**
 * binary_to_ulint - converts binary to int
 *
 * @b: pointer to binary string
 * Return: converted int (success); otherwise 0
 */

unsigned int binary_to_ulint(char *b)
{
	unsigned long int n;
	int len = 31, i, j, k;
	int value;

	n = 0;

	if (b == NULL)
		return (0);

	i = len;
	k = 0;
	while (k <= len && i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1' && k == 0)
		{
			n = n + 1;
		}

		else if (b[i] == '1' && k != 0)
		{
			value = 1;
			j = k;
			while (j > 0)
			{
				value = value * 2;
				j--;
			}
			n = n + value;
		}
		k++;
		i--;
	}
	return (n);
}
