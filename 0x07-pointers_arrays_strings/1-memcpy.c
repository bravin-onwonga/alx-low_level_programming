#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *@dest: string to copy to
 *@src: string to copy from
 *@n: integer
 *
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
