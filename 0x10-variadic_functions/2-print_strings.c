#include "variadic_functions.h"

/**
 * actual_print - does the printing
 *
 * @s: string to be printed
*/

void actual_print(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		putchar(s[k]);
	}
}

/**
 * print_strings - prints all args (string) passed
 *
 * @separator: separates the strings printed no printing if NULL
 * @n: number of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (i < (n - 1))
		{
			if (s)
			{
				actual_print(s);
				if (separator != NULL)
					printf("%s", separator);
			}
			else
				printf("(nil)");
		}
		else if (i == (n - 1))
		{
			if (s)
			{
				actual_print(s);
			}
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(ap);
}
