#include "main.h"

/**
 * print_last_digit - prints the last value of int
 *
 * @n: integer
 * @lst_digit - last digit of n
 * Return: lst_digit (success)
 */

int print_last_digit(int n)
{
	int lst_digit;

	lst_digit = n % 10;
	if (lst_digit < 0)
		lst_digit = -lst_digit;
	_putchar('0' + lst_digit);

	return (lst_digit);
}
