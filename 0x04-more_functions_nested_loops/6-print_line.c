#include "main.h"

/**
  * print_line - prints '_' n times if n is greater than 0
  *
  * @n: integer
  */

void print_line(int n)
{
	while (n >= 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
