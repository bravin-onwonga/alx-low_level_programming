#include "main.h"

/**
 *print_to_98 - prints all numbers between n and 98 , including 98 and n
 *descending if n > 98 , ascending if 98 < n
 *@n: numberat which the count begins
 */
void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		while (n < 99)
		{
			if (n != 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n == 98)
			{
				_putchar (n + '0');
			}
			n++;
		}
		_putchar('\n');
	}
	else 
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
