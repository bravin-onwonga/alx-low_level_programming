#include "main.h"


/**
 * _abs - print absolute value of an integer
 *
 * @n: integer
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	return (n);
	_putchar('\n');
}
