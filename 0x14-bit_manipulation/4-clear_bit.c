#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 *
 * @n: integer
 * @index: index in binary to convert
 * Return: 1 (success); otherwise -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	char ar[64];
	unsigned int len;
	char *ptr = ar;

	memset(ar, '0', sizeof(ar));

	if (num == 0 && index == 0)
	{
		*n = 1;
	}

	if (index > 64)
	{
		return (-1);
	}

	ptr = int_to_Bin(ar, num);

	len = getLen(ptr);
	ar[index] = '0';
	*n = binary_to_ulint(ar, len);
	return (1);
}
