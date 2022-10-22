#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */

int main(void)
{
	long a, b;

	a = 612852475143;
	for (b = 2; b < a; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%lu", b);
	putchar('\n');
	return (0);
}
