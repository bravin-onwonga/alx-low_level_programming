#include "main.h"

/**
 * _strchr - finds character in str
 *
 * @s: pointer to first element of str
 * @c: character to find
 * Return: pointer to first occurence of char; otherwise NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
