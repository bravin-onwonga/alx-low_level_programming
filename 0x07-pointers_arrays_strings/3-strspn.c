#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *@s: main string
 *@accept: substring
 *
 *Return: integer of number of similar characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] !=  '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				count ++;
				break;
			}
		}
		if (accept[i] == '\0')
			return (count);
	}
	return (count);
}
