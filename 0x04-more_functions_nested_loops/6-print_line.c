#include "main.h"

/**
  * print_line - prints '_' n times if n is greater than 0
  *
  * @n: integer
  * @i - integer
  */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
