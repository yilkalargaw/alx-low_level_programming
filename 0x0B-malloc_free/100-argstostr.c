#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to a new string, or NULL if
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	/* Check if the number of arguments is zero or the array of arguments is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the length of the new string */
	for (i = 0; i < ac; i++, len++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * (len + 1));

	/* Check if memory allocation was successful */
	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the new string */
	i = 0;
	for (; i < ac; i++, k++)
	{
		j = 0;
		for (; av[i][j]; j++, k++)
			str[k] = av[i][j];
		/* Add a newline character after each argument */
		str[k] = 10;
	}

	/* Add a null terminator at the end of the new string */
	str[k] = 0;

	/* Return a pointer to the new string */
	return (str);
}
