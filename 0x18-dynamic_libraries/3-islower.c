#include "main.h"

/**
 *  _islower - checks if c is in lowercase
 *
 * @c : ASCII value of c
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
