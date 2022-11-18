#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format:list of types of arguments.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list valst;
	unsigned int i = 0, c = 0, j;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valst, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(" ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case "c":
				printf("%c", va_arg(valst, int)), c = 1;
				break;
			case "i":
				printf("%d", va_arg(valst, int)), c = 1;
				break;
			case "f":
				printf("%f", va_arg(valst, int)), c = 1;
				break;
			case "s":
				str = va_arg(valst, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n", va_end(valst));
}
