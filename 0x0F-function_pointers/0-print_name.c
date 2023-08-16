#include "function_pointers.h"

/**
  * print_name - function to point to function
  *
  * @s: first argument
  * @f: pointer to function
  */

void print_name(char *s, void (*f)(char *))
{
	if (!s || !f)
		return;
	f(s);
}
