#include "main.h"

/**
 * _strstr - find needle in a haystack
 * @haystack: haystack
 * @needle: needle
 *
 * Return: the location as char
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned long mask[256] = {0};
	unsigned long needle_len = 0;
	char *p;

	/* Set the bits corresponding to the characters in the needle */
	for (p = needle; *p; p++)
	{
		mask[(unsigned char)*p] |= 1UL << needle_len;
		needle_len++;
	}

	/* Search for the needle in the haystack */
	for (p = haystack; *p; p++)
	{
		unsigned long state = 0;
		char *q;

		/* Check if the current character matches any character in the needle */
		for (q = p; *q && (state |= mask[(unsigned char)*q]) < (1UL << needle_len); q++)
		{
			state <<= 1;
		}

		/* Check if the needle is found */
		if (state == (1UL << needle_len))
			return (p);
	}

	/* Return '\0' if no match is found */
	return (0);
}
