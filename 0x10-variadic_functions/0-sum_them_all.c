#include "main.h"

/**
 * sum_them_all - calculates the sum of it parameters
 * @n: integer
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
