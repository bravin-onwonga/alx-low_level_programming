#include "main.h"

void printInteger(int n)
{
	if (n / 10)
	{
		printInteger(n / 10);
		_putchar((n % 10) + 48);
	}
}
