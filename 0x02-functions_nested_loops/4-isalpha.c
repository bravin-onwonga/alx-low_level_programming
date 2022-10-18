#include "main.h"

/**
 *_isalpha checks if c is a letter
 *@c : is the value being checked
 *Return: 1 if true otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
