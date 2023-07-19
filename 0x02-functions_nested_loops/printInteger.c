#include "main.h"

void printInt(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		printInt(n / 10);
	}
	_putchar((n % 10) + 48);
}
