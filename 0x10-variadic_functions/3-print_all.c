#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: str containing list of types of args
 */

void print_all(const char *const format, ...)
{
	va_list(ap);
	const char *p;
	char *str, *sep = "";

	va_start(ap, format);

	p = format;
	if (p)
	{
		while (*p != '\0')
		{
			switch (*p)
			{
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			}
			sep = ", ";
			p++;
		}
	}
	printf("\n");
	va_end(ap);
}
