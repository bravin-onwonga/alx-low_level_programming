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
	unsigned int i, len;

	for (len = 0; dest[len] != '\0'; len++)
		;

	if (n > len)
		n = len;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		*dest = *src;
		src++;
		i++;
	}

	return (dest);
}
