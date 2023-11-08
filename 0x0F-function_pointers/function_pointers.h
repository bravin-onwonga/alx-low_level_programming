#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
