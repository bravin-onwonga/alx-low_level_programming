#include "main.h"

/**
 *_isdigit -  checks is a digit through 0 to 9
 *@c: is the value being checked
 *Return: 1 if is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
