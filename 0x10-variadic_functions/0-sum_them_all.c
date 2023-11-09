#include "variadic_functions.h"

/**
 * sum_them_all - sums up arguments
 *
 * @n: count of arguments passed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	i = 0;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
