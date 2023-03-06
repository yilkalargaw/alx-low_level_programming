#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: input string
 * @c: the char we find
 *
 * Return: the location as char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i=0;
    unsigned int j, flag;

	for (; s[i] != 0; i++)
	{
		flag = 0;
		j = 0;

		for (; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			break;
	}

	return i;
}
