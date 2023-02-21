#include "main.h"
/**
 * _isalpha - short description
 * @c: input character
 * Return: 0 if lower
 */
int _isalpha(int c)
{
	if (('a' <= c && 'z' >= c) ||
		('A' <= c && 'Z' >= c))
		return (1);
	else
		return (0);
}
