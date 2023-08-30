#include <stdio.h>

/**
 * find_largestprime - finds the largest  divisible prime number
 *
 * @n: long integer
 * Return: largest prime number
*/

long int find_largestprime(long int n)
{
	long int largest = -1, i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	if (n == 2 || n == 3)
		return (n);

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
		largest = n;

	return (largest);
}

/**
 * main - Entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	long int num, largest_prime;

	num = 612852475143;

	largest_prime = find_largestprime(num);

	printf("%ld\n", largest_prime);

	return (0);
}
