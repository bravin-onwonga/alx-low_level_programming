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
	char bin_n[64];
	char bin_m[64];
	char *ptr_n = bin_n;
	char *ptr_m = bin_m;
	unsigned int k, count = 0;

	ptr_n = int_to_Bin(bin_n, n);
	ptr_m = int_to_Bin(bin_m, m);

	k = 0;
	while (k < 64)
	{
		if (ptr_n[k] != ptr_m[k])
		{
			count++;
		}
		k++;
	}
	return (count);
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
