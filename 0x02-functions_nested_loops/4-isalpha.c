#include "main.h"

/**
 *  _isalpha - checks if c is in lowercase
 *
 * @c : ASCII value of c
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	return (0);
}
