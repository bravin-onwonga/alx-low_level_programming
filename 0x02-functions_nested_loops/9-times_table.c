#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0;
	int j;
	int n;/* holds value*/

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			n = j * i;
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
