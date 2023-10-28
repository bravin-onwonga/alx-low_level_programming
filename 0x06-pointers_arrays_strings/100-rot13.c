#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int index, i;
	char arr1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		index = 0;
		while (index < 52)
		{
			if (s[i] == arr1[index])
			{
				s[i] = arr2[index];
				break;
			}
			index++;
		}
		i++;
	}
	return (s);
}
