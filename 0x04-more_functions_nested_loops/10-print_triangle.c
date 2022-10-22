#include "main.h"

/**
 *print_triangle - use the character '#' to draw a triangle
 *@size: size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size - 1; j++)
				_putchar(' ');
			for (j = 0; j < i + 1; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
