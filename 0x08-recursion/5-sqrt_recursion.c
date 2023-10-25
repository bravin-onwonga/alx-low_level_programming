#include "main.h"

int calc_sqrt(int n, int div);

/**
 * _sqrt_recursion - calculates the square root of a number
 *
 * @n: integer
 * Return: natural squareroot of n (success); -1
 */

int _sqrt_recursion(int n)
{
	int sqrt;
	int divisor;

	divisor = 1;

	sqrt = calc_sqrt(n, divisor);
	return (sqrt);
}

/**
 * calc_sqrt - does the calculation
 *
 * @n: interger to get square root
 * @div: divisor
 * Return: squareroot (success); otherwise -1
 */

int calc_sqrt(int n, int div)
{
	if (div * div > n)
		return (-1);
	if (div * div == n)
		return (div);
	calc_sqrt(n, div + 1);
}
