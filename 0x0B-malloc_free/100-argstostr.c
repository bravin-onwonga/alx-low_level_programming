#include "main.h"

/**
  *
  */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *ar;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ar = malloc(ac * sizeof(av));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ar[(i * j)] = av[i][j];
			j++;
		}
		ar[(i * j)] = '\n';
	}
	

	return (ar);
}
	
	
