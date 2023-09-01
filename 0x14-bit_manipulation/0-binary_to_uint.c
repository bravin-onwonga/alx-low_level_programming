#include "main.h"

/**
 * binary_to_uint - converts binary to int
 *
 * @b: pointer to binary string
 * Return: converted int (success); otherwise 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i, j, k, value;

	n = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	i = i - 1;
	/* len = i; */

	k = 0;
	while (k < 32 && i >= 0)
	{
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
