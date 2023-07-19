#include "main.h"

void printInteger(int n)
{
	if (n / 10)
	{
		printInteger(n / 10);
		putchar('0' + (n % 10));
	}
}
