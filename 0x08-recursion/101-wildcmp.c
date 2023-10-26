#include "main.h"

int does_compare(char *s1, char *s2, int i, int j);

/**
 * wildcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: 1 if similar; otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	int res;
	int s1_end = _strlen_recursion(s1) - 1;
	int s2_end = _strlen_recursion(s2) - 1;

	res = does_compare(s1, s2, s1_end, s2_end);
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
 * does_compare - compares two strings
 *
 * @s1: first string
 * @s2: second string
 * @i: index iterator for s1
 * @j: index iterator for s2
 * Return: 1 if similar; otherwise 0
 */

int does_compare(char *s1, char *s2, int i, int j)
{
	if (s1[i] != s2[j] && s2[j] != '*')
		return (0);

	if (j <= 0)
		return (1);

	if (s1[i] == s2[j])
		return (does_compare(s1, s2, i - 1, j - 1));

	if (s1[i] != s2[j] && s2[j] == '*')
		return (does_compare(s1, s2, i, j - 1));

	return (1);
}
