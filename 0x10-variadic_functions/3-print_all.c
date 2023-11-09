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
	char *str;

	va_start(ap, format);

	p = format;
	while (*p != '\0')
	{
		switch (*p)
		{
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		}
		p++;
		if (*p != '\0' && (*p == 'i' || *p == 'f' || *p == 's' || *p == 'c'))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
