#include "main.h"

/**
  * print_square - prints '#' as a square
  *
  * @size: the size of the square printed.
  * @i - integer
  * @n - holds value of size.
  */

void print_square(int size)
{
	int i;
	int n;
	
	n = size;
	while (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
}
