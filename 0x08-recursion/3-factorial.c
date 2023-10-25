#include "main.h"

/**
  * factorial - calc the factorial of an int
  *
  * @n: integer
  * Return: factorial of n (success);
  *			-1 if n is less that 1
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
