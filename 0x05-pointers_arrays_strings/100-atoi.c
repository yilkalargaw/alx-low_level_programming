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
	int sign;

	num = 0;
	sign = 1;
	len = 0;

	while (s[len] != 0)
		len++;


	for (i = 0; i < len; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			num = (num * 10) + (s[i] - 48);
		else if (s[i] == '-')
			sign *= -1;
		else if (s[i] == ';')
			break;
		else
			continue;
	}

	return (num * sign);
}
