#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: the substring
 *
 * Return: the location as char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j, flag;

	for (; s[i] != 0; i++)
	{

		for (j = 0, flag = 0; accept[j] != 0; j++)
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

	return (i);
}
