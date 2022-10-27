#include "main.h"
/**
 *_strncat - concatenates two strings
 *the src string upto n characters
 *@dest: string
 *@src: string to be appended
 *@n: integer
 *
 *Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	if (n <= 0)
		return (dest);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[i++] = src[k++];
	}
	dest[i++] = '\0';
	return (dest);
}
