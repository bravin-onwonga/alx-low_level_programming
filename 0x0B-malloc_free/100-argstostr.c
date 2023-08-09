#include "main.h"

/**
  * argstostr - prints all arguments passed to the program
  *
  * @ac: argument count
  * @av: argument vector
  * Return: pointer to new string; NULL if ac or av is 0
  */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *ar;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	ar = malloc((len + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ar[k] = av[i][j];
			j++;
			k++;
		}
		ar[k] = '\n';
		k++;
		ar[k] = '\0';
	}
	return (ar);
}
