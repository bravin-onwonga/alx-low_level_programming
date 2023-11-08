#include "function_pointers.h"

/**
 * print_name - prints a name based on rules in another function
 *		used to call that function through a func pointer
 * @name: string to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
