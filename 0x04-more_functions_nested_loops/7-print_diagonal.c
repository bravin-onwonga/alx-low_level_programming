#include "main.h"

/**
  * print_diagonal - prints '\' at the nth time if n is greater than 0
  *						else it print \n
  *
  * @n: integer
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n > 1)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
