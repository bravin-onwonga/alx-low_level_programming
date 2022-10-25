#include "main.h"

/**
 *rev_string - prints a string in reverse
 *@s: pointer to string to be reversed
 *
 *Return: Nothing.
 */

void rev_string(char *s)
{
	int i, k;
	char ch;

	for (i = 0 ; s[i] != '\0'; i++)
	{

	}
	for (k = 0; k <= i / 2; k++)
	{
		ch = s[i];
		s[i] = s[i - k];
		s[i - k] = ch;
	}
}
