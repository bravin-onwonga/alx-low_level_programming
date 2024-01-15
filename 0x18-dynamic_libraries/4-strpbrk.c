#include "main.h"

/**
 * _strpbrk - finds the first occurence of char in str accept
 *		in string s
 *
 * @s: string pointer
 * @accept: string pointer
 * Return: pointer to first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
