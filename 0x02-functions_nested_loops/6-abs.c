#include "main.h"


/**
 * _abs - print absolute value of an integer
 *
 * @n: integer
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
	{
		n = -n;
		return (n);
	}
	_putchar('\n');
	return (0);
}
