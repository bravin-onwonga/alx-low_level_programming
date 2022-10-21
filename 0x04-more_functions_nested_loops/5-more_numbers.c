#include "main.h"

/**
 *more_numbers - prints the nummbers 0 to 14, ten times
 *folowed by a new line
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	while (count < 10)
	{
		i = 0;
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
