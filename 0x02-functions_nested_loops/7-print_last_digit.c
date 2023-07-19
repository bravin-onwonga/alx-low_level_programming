#include "main.h"

/**
 * print_last_digit - prints the last value of int
 *
 * @n: integer
 * @i - last value of n
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;

	_putchar('0' + i);
	return (0);
}
