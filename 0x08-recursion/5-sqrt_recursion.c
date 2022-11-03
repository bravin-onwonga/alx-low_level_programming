#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer whose squareroot is found
 *
 *Return: Squareroot if it is doesn't have -1
 */

int _sqrt_recursion(int n)
{
	return (getSqrt(n, 1));
}

/**
 *getSqrt - function that determines square root
 *@x: similar to n
 *@y: integer
 *Return: Square root of n or -1
 */

int getSqrt(int x, int y)
{
	int s = y * y;

	if (s > x)
		return (-1);
	if (s == x)
		return (y);
	return (getSqrt(x, y + 1));
}
