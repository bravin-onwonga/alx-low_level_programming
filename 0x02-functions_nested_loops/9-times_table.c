#include "main.h"

/**
 * times_table - prints time table from 0 to 9
 *
 * @i: integer
 * @j: integer
 * @mul: result of i * j
 */

void times_table(void)
{
	/* declaring variables */
	int i;
	int j;
	int mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = j * i;
			if (mul >= 10)
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
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
