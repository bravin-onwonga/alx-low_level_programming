#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
