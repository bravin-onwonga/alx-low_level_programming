#include "main.h"

/**
 *_abs - finds the absolute value of an integer
 *@n: is the integer whose absolute value is printed
 *Return: 0 always
 */
int _abs(int n)
{
	if (n >= 0)
		_putchar(n);
	else
		_putchar(n * -1);
	return ('0');
}
