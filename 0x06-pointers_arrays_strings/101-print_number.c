#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 */

void print_number(int n)
{
	int div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	div = 10;
	if (n / div < 1)
	{
		_putchar((n % 10) + '0');
	}
	else if (n / div == 1)
	{
		_putchar('1');
		_putchar('0');
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}

	else
	{
		while (n / div >= 10)
		{
			div = div * 10;
		}
		while (div >= 10)
		{
			_putchar((n / div) + '0');
			n = n - ((n / div) * div);
			div = div / 10;
		}
		_putchar((n % 10) + '0');
	}
}
