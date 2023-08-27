#include "main.h"

/**
 * _memcpy - copies n elements of src to dest
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number to elements to copy
 * Return: Pointer to final string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, len, len_src;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (len_src = 0; src[len_src] != '\0'; len_src++)
		;

	if (len_src > n)
		n = len_src;

	i = len;

	while (i < (len + n))
	{
		dest[i] = *src;
		src++;
		i++;
	}

	return (dest);
}
