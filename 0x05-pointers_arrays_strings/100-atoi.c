#include "main.h"
/**
 * _atoi - convert to numbers array
 * @s: string pointer
 *
 * Return: int
 */
int _atoi(char *s)
{
	int num;
	int i;
	int len;

	num = 0;

	len = 0;
	while (s[len] != 0)
		len++;


	if (s[0] == '-')
	{
		for (i = 1; i < len; i++)
		{
			if (s[i] >= 48 && s[i] <= 57)
				num = (num * 10) + (s[i] - 48);
			else
				continue;
		}
		return (-1 * num);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (s[i] >= 48 && s[i] <= 57)
				num = (num * 10) + (s[i] - 48);
			else
				continue;
		}
		return (num);
	}
}
