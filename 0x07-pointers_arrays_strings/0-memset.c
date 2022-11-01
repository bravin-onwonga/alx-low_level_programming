#include "main.h"

/**
 *_memset - fills the first n bytes of the memory area
 *   pointed to by s with the constant byte b
 *@s: pointer to the memory area to be filled
 *@c: the character to fill the memory area with
 *@n: number of bytes to be filled
 *
 *Return: pointer to the filled memory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *ch = s, value = c;

	for (i = 0; i < n; i++)
	{
		ch[i] = value;
	}
	return (ch);
}
