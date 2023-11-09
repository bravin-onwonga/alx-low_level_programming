#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: separator to be btn strings
 * @n: number of string passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s%s", va_arg(ap, char *), separator);
			else
				printf("%s", va_arg(ap, char *));
		}
		else
			printf("%s", va_arg(ap, char *));
	}
	printf("\n");
	va_end(ap);
}
