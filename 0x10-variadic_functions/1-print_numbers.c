#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: char to print between ints
 * @n: numbers of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		else
			printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
