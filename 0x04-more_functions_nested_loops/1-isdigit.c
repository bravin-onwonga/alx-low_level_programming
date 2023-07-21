#include "main.h"

/**
  * _isdigit - similar to the standard function isdigit
  *
  * @c: integer
  * Return: i if digit; otherwise 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
