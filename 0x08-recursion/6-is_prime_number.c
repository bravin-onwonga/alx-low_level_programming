#include "main.h"

/**
 *is_prime_number - checks if an integer is a prime number
 *@n: integer parameter
 *
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (findPrime(n, 2));
}

/**
 *findPrime - checks if a is prime
 *@a: integer
 *@b: integer
 *
 *Return: 1 or 0
 */

int findPrime(int a, int b)
{
	if (a % b == 0)
	{
		return (0);
	}
	if (b > ((a / 2) + 1))
		return (1);
	return (findPrime(a, b + 1));
}
