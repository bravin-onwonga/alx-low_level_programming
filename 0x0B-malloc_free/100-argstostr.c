#include "main.h"

int get_str_len(char *s);

char *av_concatenate(char *str, int ttl_len, int ac, char **av);

/**
 * argstostr - conctenates all arguments given
 *
 * @ac: argument count
 * @av: argument vector
 * Return: new string; otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	int i, t;
	char *str;
	int ttl_len, str_len;

	if (ac == 0)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		i++;
	}

	t = 0;
	ttl_len = 0;
	while (t < ac)
	{
		str_len = get_str_len(av[t]);
		ttl_len += str_len;
		t++;
	}

	str = malloc(sizeof(char) * ttl_len + 1);

	if (str == NULL)
		return (NULL);

	str = av_concatenate(str, ttl_len, ac, av);

	return (str);
}

/**
 * get_str_len - calculates lenght of a string
 *
 * @s: string
 * Return: length of string
 */

int get_str_len(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i++;

	return (i);
}

/**
 * av_concatenate - does the concatenation
 *
 * @str: string
 * @ttl_len: len of string
 * @ac: argument count
 * @av: argument vector
 * Return: new string
 */

char *av_concatenate(char *str, int ttl_len, int ac, char **av)
{
	int j, n, k;

	j = 0;
	n = 0;
	while (j < ttl_len + 1 && n < ac)
	{
		k = 0;
		while (av[n][k] != '\0')
		{
			str[j] = av[n][k];
			k++;
			j++;
		}
		str[j] = '\n';
		j++;
		n++;
	}
	return (str);
}
