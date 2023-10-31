#include "main.h"

int get_str_len(char *str);
int _str_len(char *s);
int get_word_no(char *s);
char *create_string(char *s, char *str);
int *create_int_array(char *s, int *int_arr, int word_count);

/**
 * strtow - creates an array of strings(words) from str
 *
 * @str: string with words
 * Return: pointer to array
 */

char **strtow(char *str)
{
	char **ar;
	char *s;
	int *int_arr;
	int len, i, word_count, m, r, z;

	if (str == NULL)
		return (NULL);

	len = _str_len(str) - 1;

	if ((len == 0) && (str[0] == ' '))
		return (NULL);

	len = get_str_len(str);

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	s = create_string(s, str);
	word_count = get_word_no(s);

	int_arr = malloc(sizeof(int) * word_count);

	if (int_arr == NULL)
		return (NULL);

	int_arr = create_int_array(s, int_arr, word_count);

	ar = malloc(sizeof(char *) * word_count + 1);

	if (ar == NULL)
		return (NULL);

	i = 0;
	m = 0;
	z = 0;
	while (m < word_count)
	{
		ar[i] = malloc(sizeof(char) * int_arr[m]);
		r = 0;
		while (r <= int_arr[m])
		{
			if (s[z] != '\n')
			{
				ar[i][r] = s[z];
			}
			r++;
			z++;
		}
		i++;
		m++;
	}
	ar[i] = NULL;

	return (ar);
}

/**
 * get_word_no - calculates the number of words in str
 *
 * @s: string
 * Return: number of words
 */

int get_word_no(char *s)
{
	int i, word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			word_count += 1;
		}
		i++;
	}
	return (word_count);
}

/**
 * get_str_len - calculates length of string
 *		while omitting spaces
 *
 * @str: string with sapces
 * Return: length
 */

int get_str_len(char *str)
{
	int len, i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len += 1;
		}
		if ((str[i] != ' ') && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			len += 1;
		}
		i++;
	}

	return (len);
}

/**
 * create_string - removes spaces from str
 *
 * @s: new string
 * @str: string with spaces
 * Return: new string
 */

char *create_string(char *s, char *str)
{
	int k, i, in_word;

	k = 0;
	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			s[k] = str[i];
			k++;
			in_word += 1;
		}

		if (in_word && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			s[k] = '\n';
			k++;
			in_word = 0;
		}
		i++;
	}
	s[k] = '\0';

	return (s);
}
/**
 * _str_len - calculates lenght of a string
 *
 * @s: string
 * Return: length of string
 */

int _str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i++;

	return (i);
}

/**
 * create_int_array - creates an array of int
 *
 * @s: string
 * @int_arr: the array
 * @word_count: count of words in s
 * Return: updated int_arr
 */

int *create_int_array(char *s, int *int_arr, int word_count)
{
	int int_i, s_i, num;

	int_i = 0;
	s_i = 0;
	while (int_i < word_count)
	{
		num = 0;
		while (s[s_i] != '\n')
		{
			num += 1;
			s_i++;
		}
		int_arr[int_i] = num;
		int_i++;
		s_i++;
	}

	return (int_arr);
}
