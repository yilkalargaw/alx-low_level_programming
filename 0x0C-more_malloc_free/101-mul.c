#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strlen - return length of a string
 *@s: pointer to string
 *
 *Return: length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
		len++;

	return (len);
}

/**
 * _isdigit -  short description
 * @c: input character
 * Return: 0 if lower
 */
int _isdigit(int c)
{
	if ('0' <= c && '9' >= c)
		return (1);
	else
		return (0);
}

/**
 * _puts - prints a string
 * @str: pointer to string
 *
 * Return: len (Size s).
 */
void _puts(char *str)
{
	int i = 0;

	for (; *(str + i) != 0 ; i++)
		_putchar(*(str + i));

	_putchar(10);
}

/**
 * _atoi - convert to numbers array
 * @s: string pointer
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int num;
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
		else if (s[i] == '+' || s[i] == ' ')
			sign *= 1;
		else if (num == 0)
			continue;
		else
			return (num * sign);
	}

	return (num * sign);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2, len_product, *product;
	char *s1, *s2;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}
	s1 = argv[1];
	s2 = argv[2];

	i = 0;
	for (; s1[i]; i++)
	{
		if (!_isdigit(s1[i]))
		{
			_puts("Error\n");
			return (98);
		}
	}

	i = 0;
	for (; s2[i]; i++)
	{
		if (!_isdigit(s2[i]))
		{
			_puts("Error\n");
			return (98);
		}
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len_product = len1 + len2;
	product = calloc(len_product, sizeof(int));
	if (product == NULL)
		return (1);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
			product[i + j] += product[i + j + 1] / 10;
			product[i + j + 1] %= 10;
		}
	}

	i = 0;
	for (;i < len_product && product[i] == 0; i++)
		;

	if (i == len_product)
		putchar('0');

	for (; i < len_product; i++)
		putchar(product[i] + '0');

	putchar('\n');
	free(product);
	return (0);
}
