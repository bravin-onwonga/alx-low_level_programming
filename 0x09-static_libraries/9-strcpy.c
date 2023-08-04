#include "main.h"

char *_strcpy(char *dest, char *src)
{
		while (*src != '\0')
				{
							*dest = *src;
									src++;
										}
			return dest;
}
