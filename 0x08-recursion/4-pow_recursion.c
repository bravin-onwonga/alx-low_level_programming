#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: first integer raised to the power of y
 *@y: integer
 *
 *Return: ineger of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	/*base case*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(y - 1));
}
