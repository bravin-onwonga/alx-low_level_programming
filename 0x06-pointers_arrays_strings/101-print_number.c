#include "main.h"

int get_int_len(int n);
void print_int(int n, int len);

void print_number(int n)
{
	int len;

	len = get_int_len(n);
	print_int(n, len);
}

int get_int_len(int n)
{
	int len;

	len = 0;

	if (n < 0)
	{
		n = -n;
		len += 1;
	}

	while (n / 10 >= 1)
	{
		len++;
		n = n - (10 * (n / 10));
	}
	len++;
	return (len);
}

void print_int(int n, int len)
{
	char s[len];
	int i = 0;
	int k;

	while (i < len)
	{
		if (n < 0)
		{
			s[i] = '-';
			i++;
		}
		s[i] = ((n % 10) + '0');
		n = (n - (10 * (n / 10)));
		i++;
	}

	k = len - 1;

	while (k >= 0)
	{
		_putchar(s[k]);
		k--;
	}
}
