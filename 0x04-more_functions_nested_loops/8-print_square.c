#include "main.h"

/**
 *print_square - prints # to form of a square
 *@size: the size of the square
 *followed by a new line
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
