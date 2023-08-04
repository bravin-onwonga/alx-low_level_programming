#include "main.h"

/**
    * _isupper - check if character is in uppercase
	  *
	    * @c: ascii value of character
		  * Return: 1 if upper; otherwise 0
		    */

int _isupper(int c)
{
		if (c >= 65 && c <= 90)
					return (1);
			return (0);
}
