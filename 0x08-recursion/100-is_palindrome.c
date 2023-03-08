#include "main.h"

/**
 * str_len - calculate string length with recursion
 * @s: input string
 *
 * Return: factorial as int
 */
int str_len(char *str)
{
    if (*str == '\0')
        return 0;

    return 1 + str_len(str + 1);
}

/**
 * _is_palindrome_checker - calculates factorial
 * @s: input string
 * @b: beginning char index
 * @e: ending char index
 * Return: factorial as int
 */

int is_palindrome_checker(const char *s, int b, int e)
{
	if ((e - 1) <= b)
		return 1;
	if (s[b] != s[e-1])
	   return 0;

  return is_palindrome_checker(s, b+1, e-1);
}

/**
 * _is_palindrome - calculates factorial
 * @s: input string
 *
 * Return: factorial as int
 */
int is_palindrome(char *s)
{
	return(is_palindrome_checker(s, 0, str_len(s)));
}
