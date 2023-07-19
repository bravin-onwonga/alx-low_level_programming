#include "main.h"

/**
 * print_last_digit - prints the last value of int
 *
 * @n: integer
 * @lst_digit - last value of n
 * Return: 0 (success)
 */

int print_last_digit(int n)
{
	int lst_digit;

	if (n < 0)
		n = -n;
	lst_digit = n % 10;
	_putchar(lst_digit);

	return (lst_digit);
}
