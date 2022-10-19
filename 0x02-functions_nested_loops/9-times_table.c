#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, n;

	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			n = j * i;
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
}
