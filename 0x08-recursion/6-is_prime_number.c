#include "main.h"

int find_if_prime(int n, int divisor);

/**
 * is_prime_number - checks if an int is a prime number
 *
 * @n: integer
 * Return: 1 (is prime); otherwise -1
 */

int is_prime_number(int n)
{
	int divisor;

	divisor = 2;

	if (n < 2)
		return (-1);

	if (n == 2)
		return (1);

	return (find_if_prime(n, divisor));
}

/**
 * find_if_prime - does the calculation
 *
 * @n: integer
 * @divisor: int divisor to check
 * Return: 1 (isprime); -1 (not prime)
 */

int find_if_prime(int n, int divisor)
{
	if (divisor > n / 2)
		return (1);

	if (n % divisor == 0)
		return (-1);

	return (find_if_prime(n, divisor + 1));
}
