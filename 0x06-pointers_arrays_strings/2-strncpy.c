#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: copy to
 *@src: string to be copied
 *@n: number of character of src copied
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
