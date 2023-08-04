#include "main.h"

/**
    * _memset - sets n bytes of s to char b
	  *
	    * @s: pointer to address to memory to change
		  * @b: character to change to
		    * @n: number of bytes of s to change
			  * @len - length of s
			    * @i - iterator
				  * Return: pointer to changed memory.
				    */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int len, i;

			for (len = 0; s[len] != '\0'; len++)
						;

				if (len < n)
							len = n;
					for (i = 0; i < n; i++)
								s[i] = b;
						for (; i < n; i++)
									s[i] = '\0';
							return (s);
}
