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

	(argc != 3 || !*argv[1] || !*argv[2]) ? (puts("Error"), exit(98)) : (void)0;

	for (i = 0; s1[i] && _isdigit(s1[i]); i++)
		;
	(s1[i]) ? return (puts("Error"), 98) : (void) 0;

	for (i = 0; s2[i] && _isdigit(s2[i]); i++)
		;
	(s2[i]) ? return (puts("Error"), 98) : (void) 0;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len_product = len1 + len2;
	product = malloc(len_product * sizeof(int));
	(!product) ? (exit(1)) : (void)0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
			product[i + j] += product[i + j + 1] / 10;
			product[i + j + 1] %= 10;
		}
	}

	for (i = 0; i < len_product && product[i] == 0; i++)
		;
	if (i == len_product)
		_putchar('0');
	else
	{
		for (; i < len_product; i++)
			_putchar(product[i] + '0');
	}
	_putchar('\n');

	free(product);
	return (0);
}
