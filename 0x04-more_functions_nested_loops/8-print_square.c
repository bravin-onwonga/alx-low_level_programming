#include "main.h"

/**
  * print_square - prints '#' as a square
  *
  * @size: the size of the square printed.
  * @i - integer
  */

void print_square(int size)
{
	int i;

	while (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
	_putchar('\n');
}
