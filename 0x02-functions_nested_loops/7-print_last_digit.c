#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: number whose last digit is printed
 *Return: The last digit of the number n
 */
int print_last_digit(int n)
{
	int l;

	if (n > 0)
	{
		l = n % 10;
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = -1 * (n % 10);
		_putchar(l + '0');
		return (l);
	}
}
