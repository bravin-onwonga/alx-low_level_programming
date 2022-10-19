#include "main.h"

/**
 *jack_bauer - prints every minute in 24hrs
 */

void jack_bauer(void)
{
	int a = 0;
	int i = 0, j = 0, k = 0, l = 0;

	while (a < 1440)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');

		l++;
		if (l > 9)
		{
			l = 0;
			k++;
		}
		if (k > 5)
		{
			k = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}
		a++
	}
}
