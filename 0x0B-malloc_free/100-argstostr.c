#include "main.h"

/**
  * argstostr - prints all arguments passed to the program
  *
  * @ac: argument count
  * @av: argument vector
  * Return: double pointer to array; NULL if ac or av is 0
  */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	char **ar;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ar = malloc(ac * sizeof(char *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		ar[i] = malloc(j * sizeof(char));
	}

	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			ar[i][k] = av[i][k];
			k++;
		}
		ar[i][k] = '\n';
	}
	return (*ar);
}
