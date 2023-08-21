#include "variadic_functions.h"

/**
 * print_numbers - prints all arguments passed
 *
 * @separator: char to separate the arguments printed
 *              if char is NULL don't print
 * @n: number of arguments passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (i < (n - 1))
		{
			if (separator == NULL)
				printf("%d", num);
			else
				printf("%d%s", num, separator);
		}
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(ap);
}
