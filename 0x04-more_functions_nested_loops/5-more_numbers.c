#include "main.h"

/**
 *more_numbers - prints the nummbers 0 to 14, ten times
 *folowed by a new line
 */
void more_numbers(void)
{
	int i;
	int count = 0;

	while (count <= 10)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		count++;
	}
}
