#include "main.h"

/**
 *rot13 - changes all lowercase letters of a string to uppercase
 *@p: string
 *
 *Return: char
 */

char *rot13(char *p)
{
	int i, j;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; p[i]; i++)
	{
		for (j = 0; str1[j]; j++)
		{
			if (p[i] == str1[j])
			{
				p[i] = str2[j];
				break;
			}
		}
	}
	return (p);
}
