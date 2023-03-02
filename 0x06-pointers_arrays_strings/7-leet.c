#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: pointer to input string
 *
 * Return: pointer to output string
 */

char *leet(char *s)
{
	char *text = "aAeEoOtTlL";
	char *replacements = "4433007711";
	int i = 0;
	int j = 0;

	for (; s[i] != 0; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (s[i] == text[j])
				s[i] = replacements[j];
		}
	}
	return (s);
}
