#include "main.h"
/**
 * cap_string - capitalize every string
 * @s: input string
 *
 * Return: char * to capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 ||
			s[i - 1] == ' ' || s[i - 1] == '\t' ||
			s[i - 1] == '\n' || s[i - 1] == ',' ||
			s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' ||
			s[i - 1] == '"' || s[i - 1] == '(' ||
			s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
