#include "main.h"
/**
 * rot13 - encode string in rot13
 * @str: input string pointer
 *
 * Return: char
 */
char *rot13(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		char c = *p;

		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			if (c >= 65 && c <= 90)
				c = 65 + (c - 65 + 13) % 26;
			else
				c = 97 + (c - 97 + 13) % 26;
		}
		*p = c;
		p++;
	}
	return (p);
}
