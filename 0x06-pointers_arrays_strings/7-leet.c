#include "main.h"

char *leet(char *s)
{
	int i, j;

	char ar[20] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0', 'O',
		       '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (s[i] == ar[j])
			{
				s[i] = ar[j + 1];
				break;
			}
		}
	}
	return (s);
}
