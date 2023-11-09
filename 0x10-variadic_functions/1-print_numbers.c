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
	int i;

	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%c ", va_arg(ap, int), separator[0]);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
