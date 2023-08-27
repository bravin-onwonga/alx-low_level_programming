#include "main.h"

/**
 * _strspn - counts the occurence of chars in accept
 *		in s
 * @s: string to compared
 * @accept: string whose element we should find
 * Return: number of occurence.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, j;

	count = 0;
	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
