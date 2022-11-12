#include"main.h"

/**
 *_isupper -checks if a character is in upppercase or lowercase.
 *@c: the character being checked.
 *Return: 1 if it is in uppercse and 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
