#include "main.h"

void actual_print(unsigned long int n);

/**
 * print_binary - print a number in binary
 *
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	actual_print(n);
}

/**
 * actual_print - handles the printing
 *
 * @n: integer to print
 */

void actual_print(unsigned long int n)
{
	if (n == 0)
		return;

	actual_print(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
