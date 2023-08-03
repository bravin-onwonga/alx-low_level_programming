#include "main.h"

/**
  * divide - checks if n is divisible by
  *			 any number less than n / 2
  * @n: integer
  * @div: integer (divisor)
  * Return: 1 if div is one; otherwise 0
  */

int divide(int n, int div)
{
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0 && div > 1)
	{
		return (0);
	}
	return (divide(n, (div - 1)));
}

/**
  * is_prime_number - check if n is a prime number
  *
  * @n: integer
  * @div - integer (divisor)
  * Return: 1 if prime; otherwise 0
  */

int is_prime_number(int n)
{
	int div;

	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	div = n / 2;
	n = divide(n, div);
	return (n);
}
