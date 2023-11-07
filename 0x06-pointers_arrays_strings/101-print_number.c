#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 */

void print_number(int n)
{
	int div, temp;

	if (n == INT_MIN)
	{
		_putchar('-');
		n = -(n + 1);
		print_number(n / 10);
		_putchar('8');
		return;
	}

	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	div = 1;
	temp = n;

	while (temp / 10 > 0)
	{
		div = div * 10;
		temp = temp / 10;
	}

	while (div > 0)
	{
		_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
}
