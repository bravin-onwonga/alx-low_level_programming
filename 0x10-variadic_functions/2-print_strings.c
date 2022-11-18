#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings.
 * @n: number of string
 *
 *Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *str;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(lst, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(lst);
}
