#include "main.h"

/**
 * reverse_array - compares two strings
 * @s: pointer to string s
 *
 * Return: char * of reversed string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		else
			continue;
	}

	return (s);
}
