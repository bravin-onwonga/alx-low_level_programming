#include "main.h"

/**
  * print_triangle - prints '*' as a right angled triangle
  *					triangle faces left
  *
  * @size: the size of the square printed.
  * @i - integer
  * @n - holds value of size.
  */

void print_triangle(int size)
{
	int i;
	int n;

	n = size;
	if (size > 0)
	{
		while (size > 0)
		{
			for (i = 1; i <= n; i++)
			{
				if (i < size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
			size--;
		}
	}
	else
		_putchar('\n');
}
