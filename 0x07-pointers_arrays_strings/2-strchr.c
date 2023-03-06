#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: input string
 * @c: the char we find
 *
 * Return: the location as char
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != 0; ++i)
	{
		if (s[i] == c)
			return (s);
	}

	return (0);
}
