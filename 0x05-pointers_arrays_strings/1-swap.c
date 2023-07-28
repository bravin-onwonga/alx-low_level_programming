#include "main.h"

/**
  * swap_int - swaps two integers
  *
  * @a: pointer to integer a
  * @b: pointer to integer b
  * @tmp - temporary variable to hold value during swapping
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
