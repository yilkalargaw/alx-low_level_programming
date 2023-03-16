#include <stdlib.h>
#include <stdio.h>

/**
 * check_space - check for whitespaces
 * @c: char
 *
 * Return: nonzero if true
 */
int check_space(char c)
{
	return (c == ' ' || c == '\n');
}

/**
 * count_words - changes strings to words
 * @str: the string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		if (!check_space(str[i]))
		{
			count++;
			for (; str[i] && !check_space(str[i]); i++)
				;
		}
		else
			i++;
	}
	return (count);
}

/**
 * strtow - changes strings to words
 * @str: the string
 *
 * Return: A pointer a pointer array to pointers of words
 */
char **strtow(char *str)
{
	char **words;
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = malloc(sizeof(char *) * (count_words(str) + 1));
	if (words == NULL)
		return (NULL);
	while (str[i])
	{
		if (!check_space(str[i]))
		{
			len = 0;
			j = i;
			for (; str[j] && !check_space(str[j]); len++, j++)
				;

			words[k] = malloc(sizeof(char) * (len + 1));

			if (words[k] == NULL)
				return (NULL);

			j = 0;
			for (; j < len; j++)
				words[k][j] = str[i + j];

			words[k][j] = '\0';
			k++;
			i += len;
		}
		else
			i++;
	}
	words[k] = NULL;
	return (words);
}
