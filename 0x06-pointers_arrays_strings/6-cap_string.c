#include "main.h"

/**
 * cap_string - capitizes a string
 *
 * @s: string
 * Return: pointer to capitized string
 */

char *cap_string(char *s)
{
	int i, j;
	char a[12] = {',', '.', '\t', '\n', '!', '?', '"', '(', ')', '{', '}', ' '};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 'a' + 'A';
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (s[i] == a[j] && (s[(i + 1)] >= 'a' && s[(i + 1)] <= 'z'))
				s[(i + 1)] = s[(i + 1)] - 'a' + 'A';
		}
	}
	return (s);
}
