#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer whose squareroot is found
 *
 *Return: Squareroot if it is doesn't have -1
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i * i == n && i < (n / 2))
	{
		return (i);
	}
	return _sqrt_recursion(i + 1);
	return (-1);
}

