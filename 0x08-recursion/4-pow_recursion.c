#include "main.h"

/**
  * _pow_recursion - calculate x to power y
  *
  * @x: integer
  * @y: integer
  * Return: power of x raised to y
  */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}