#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: number whose last digit is printed
 *Return: The last digit of the number n
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar('l');
	return (l);
}
