#include "3-calc.h"

/**
  * op_add - adds two integers
  *
  * @a: first integer
  * @b: second integer
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  *
  * @a: first integer
  * @b: second integer
  * Return: result of a minus b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplys a and b
  *
  * @a: first integer
  * @b: second integer
  * Return: a * b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  *
  * @a: first integer
  * @b: divisor
  * Return: a multiplied by b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - calc mod of two integers
  *
  * @a: first integer
  * @b: second integer
  * Return: a mod b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
