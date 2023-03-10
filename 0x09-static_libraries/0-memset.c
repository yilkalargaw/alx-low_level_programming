#include "main.h"

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
