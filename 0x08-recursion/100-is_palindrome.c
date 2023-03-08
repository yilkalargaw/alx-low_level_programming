#include "main.h"

/**
 * _is_palindrome - calculates factorial
 * @s: input string
 *
 * Return: factorial as int
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;

	if (len == 0 || len == 1)
		return 1;

	if (s[0] != s[len - 1])
		return 0;

	s[len - 1] = 0;

	return is_palindrome(s + 1);
}
