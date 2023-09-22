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
 * times_table - prints time table from 0 to 9
 *
 * @i - integer
 * @j - integer
 * @mul - result of i * j
 */

void print_times_table(int n)
{
	/* declaring variables */
	int i;
	int j;
	int mul;

	if (n <= 15 && n >= 0)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = j * i;
				printInt(mul);
			}
			else if (j != 0 && mul < 10)
			{
				_putchar(' ');
				_putchar(mul + 48);
			}
			else
				_putchar(mul + 48);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
