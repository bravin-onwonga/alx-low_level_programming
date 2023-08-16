#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

void print_name(char *s, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
