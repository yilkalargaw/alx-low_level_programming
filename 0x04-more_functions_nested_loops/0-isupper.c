#include "main.h"
/**
 * _isupper - short description
 * @c: input character
 * Return: 0 if lower
 */
int _isupper(int c)
{
	if ('A' <= c && 'Z' >= c)
		return (1);
	else
		return (0);
}
