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

	for (;*s != '\0'; ++s)
	{
		if (*s == c)
			return (s);
	}

	return (0);
}
