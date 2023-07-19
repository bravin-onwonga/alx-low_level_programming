#include "main.h"

/**
 * printInt - prints integer using _putchar
 * @n: integer to be printed
 */

void printInt(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		printInt(n / 10);
	}
	_putchar((n % 10) + 48);
}

/**
 * print_to_98 - prints all integers to 98
 *
 * @n: integer
 * @i - holds the value during looping
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printInt(n);
		_putchar('\n');
	}

	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printInt(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			printInt(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
