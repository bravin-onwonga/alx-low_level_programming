#include "main.h"

/**
 *is_palindrome -checks if a string is same if reversed
 *@s: pointer to string array
 *
 *Return: returns 1 if a string is a palindrome and 0 if no
 */

int is_palindrome(char *s)
{
	char ch, ch1;

	ch = _puts_recursion(s);
	ch1 = _print_rev_recursion(s);

	if (ch == ch1)
		return (1);
	return (0);
}
