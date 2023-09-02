#include "main.h"

void printInt(unsigned long int num)
{
	if (num / 10)
	{
		printInt(num / 10);
	}
	_putchar((num % 10) + '0');
}

void print_binary(unsigned long int n)
{
	int j, i = 16;
	unsigned int value;
	unsigned long int num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (i >= 0)
	{
		if (n == 0)
		{
			if (i != 0)
			{
				while(i)
				{
					_putchar('0');
					i--;
				}
			}
			_putchar('0');
			return;
		}
		if (n == 1)
		{
			if (i != 0)
			{
				while(i)
				{
					_putchar('0');
					i--;
				}
			}
			_putchar('1');
			return;
		}
		j = i;
		value = 1;
		while(j)
		{
			value = value * 2;
			j--;
		}
		if (n >= value)
		{
			n = n - value;
			_putchar('1');
		}
		else if(n < value && n < num)
			_putchar('0');

		i--;
	}
	return;
}
