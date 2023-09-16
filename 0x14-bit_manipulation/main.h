#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
unsigned long int binary_to_ulint(char *str, unsigned int len);
char *int_to_Bin(char *ar, unsigned long int num);
unsigned long int binary_to_ulint(char *str, unsigned int len);
unsigned int getLen(char *ar);
int clear_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */
