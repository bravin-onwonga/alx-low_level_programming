#include "main.h"
#include <stdio.h>
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
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
