#include "main.h"

/**
  * print_diagonal - prints '\' at the nth time if n is greater than 0
  *						else it print \n
  *
  * @n: integer
  */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		j = 1;
		_putchar('\\');
		_putchar('\n');
		while (j < n)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
