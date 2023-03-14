#include <stdlib.h>

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: input pointer
 * @b: char
 * @n: no. of bytes
 *
 * Return: pointer to output string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; ++i)
		s[i] = b;

	return (s);
}

/**
 * create_array - create array of chars and initialize
 * @size: size of the array
 * @c: char to initialize with
 *
 * Return: pointer to the array or NULL if it fails or size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (array == NULL || size == 0)
		return (NULL);

	_memset(array, c, size);

	return (array);
}
