#include "main.h"

/**
 *print_to_98 - prints all numbers between n and 98 , including 98 and n
 *descending if n > 98 , ascending if 98 < n
 *@n: numberat which the count begins
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 99)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			if (n != 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
			}
			n--;
		}
		_putchar('\n');
	}
}
