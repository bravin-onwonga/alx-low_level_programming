#include "main.h"

/**
 * strLen - gets length of string
 *
 * @s: pointer to string
 * Return: length of string
*/

int strLen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	return (i);
}

/**
 * binary_to_uint - converts binary to int
 *
 * @b: pointer to binary string
 * Return: converted int (success); otherwise 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int len, i, j, k, value;

	n = 0;

	if (b == NULL)
		return (0);

	len = strLen(b);

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
