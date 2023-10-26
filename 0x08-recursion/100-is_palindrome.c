#include "main.h"

int _strlen_recursion(char *s);
int str_compare(char *s, int start, int end);

/**
 * is_palindrome - checks a word is similar reversed
 *
 * @s: string pointer
 * Return: 1 if palindrome; otherwise 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int res;

	res = str_compare(s, 0, len - 1);
	return (res);
}

/**
 * _strlen_recursion - calculates str length using recursion
 *
 * @s: string pointer
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * str_compare - does the compare
 *
 * @s: string pointer
 * @start: int
 * @end: int
 * Return: 1 if palindrome; otherwise 0
 */

int str_compare(char *s, int start, int end)
{
	if (start > end)
		return (1);

	if (s[start] == s[end])
		return (str_compare(s, start + 1, end - 1));

	return (0);
}
