#include "main.h"

/**
 * _strstr - finds needle in haystack
 *
 * @haystack: string to look in
 * @needle: string to be found
 * Return: pointer to beginning of str
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, h;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			h = i;
			j = 0;
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[h])
				{
					j++;
					h++;
				}
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[k]);
			}
		}
	}
	return (NULL);

}
