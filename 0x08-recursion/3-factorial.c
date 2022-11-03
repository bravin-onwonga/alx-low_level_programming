#include "main.h"

/**
 *factorial - returns factorial of a given number
 *@n: integer parameter
 *
 *Return: factorial of n if 0 or greater than zero else -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	/*base case*/
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
