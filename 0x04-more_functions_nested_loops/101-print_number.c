#include "main.h"

/**
  * printInt - prints an int using recursion
  * @n: int to print
  */

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

/**
  * print_number - prints an integer using _putchar
  *
  * @n: integer
  */

void print_number(int n)
{
	printInt(n);
	_putchar('\n');
}
