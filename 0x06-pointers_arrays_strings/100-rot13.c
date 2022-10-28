#include "main.h"

/**
 *rot13 - changes all lowercase letters of a string to uppercase
 *@p: string
 *
 *Return: char
 */

char char *rot13(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z' || p[i] >= 'A' && p[i] <= 'Z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
