#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0;
	int j, n;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			n = j * i;
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		j++;
	}
	_putchar('\n');
	i++;
}
