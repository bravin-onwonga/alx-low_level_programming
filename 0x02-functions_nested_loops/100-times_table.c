#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 *@n: int type number whose times table is printed
 *if n is greater than 15 or less than 0 prints nothing
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int k;/* holds value*/

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;
			if (k > 99)
			{
				_putchar(k / 100 + '0');
				_putchar((k / 10 % 10) + '0');
				_putchar(k % 10 + '0');
			}
			else if (k > 9)
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
				_putchar(k + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
