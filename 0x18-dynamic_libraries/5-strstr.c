#include "main.h"
#include <stdio.h>

/**
 * _strstr - find needle in a haystack
 * @haystack: haystack
 * @needle: needle
 *
 * Return: the location as char
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, flag = 0;

	if (*needle == 0)
		return (haystack);

	for (; *(haystack + i) != 0; ++i)
	{
		for (j = 0; *(needle + j) != 0; ++j)
			if (*(needle + j) == *(haystack + i + j))
				flag++;

		if (*(needle + flag) == 0)
			return (haystack + i);

		printf("format string" ,i,j);

		flag = 0;
	}

	return (0);
}
