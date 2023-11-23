#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 (little endian); 1 (big endian)
 */

int get_endianness(void)
{
	int *ptr;
	unsigned char *bytePtr;

	ptr = malloc(sizeof(int));

	if (ptr == NULL)
		return (0);

	*ptr = 1;
	bytePtr = (unsigned char *)ptr;

	if (*bytePtr)
		return (1);
	return (0);
}
