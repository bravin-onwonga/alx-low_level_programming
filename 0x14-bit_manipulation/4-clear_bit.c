#include "main.h"

/**
 * getLen - gets length of a string
 *
 * @ar: str
 * Return: length of string
*/

unsigned int getLen(char *ar)
{
	unsigned int i;

	for (i = 0; ar[i] != '\0'; i++)
		;

	return (i);
}

/**
 * binary_to_ulint - converts binary to int
 * int is of format unsigned long int
 *
 * @str: string
 * @len: length of str
 * Return: integer
*/

unsigned long int binary_to_ulint(char *str, unsigned int len)
{
	unsigned long int num = 0, value = 1;
	unsigned int i = 0;

	while (i < len)
	{
		if (str[i] == '1')
		{
			num = num + value;
		}
		value = value * 2;
		i++;
	}
	return (num);
}

/**
 * int_to_Bin - converts integer to binary
 *
 * @ar: string to contain the binary
 * @num: integer to convert (lu)
 * Return: pointer to string of binary
*/

char *int_to_Bin(char *ar, unsigned long int num)
{
	unsigned long int tmp;
	int i = 1;

	if (num % 2 == 0)
	{
		ar[0] = '0';
	}
	else if (num % 2 != 0)
	{
		ar[0] = '1';
	}

	tmp = num;
	while (i < 64)
	{
		if (tmp == 0)
		{
			break;
		}
		ar[i] = ((tmp >> 1 & 1) ? '1' : '0');
		tmp = tmp >> 1;
		i++;
	}
	return (ar);
}

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

	len = getLen(ar);
	ar[index] = '0';
	*n = binary_to_ulint(ar, len);
	return (1);
}
