#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int calc_sqrt(int n, int div);
int is_prime_number(int n);
int find_if_prime(int n, int divisor);

/* palindrome functions */
int is_palindrome(char *s);
int str_compare(char *s, int start, int end);
int compare_str(char *str1, char *str2);

int wildcmp(char *s1, char *s2);
int does_compare(char *s1, char *s2, int i, int j);
#endif /*MAIN-H*/
