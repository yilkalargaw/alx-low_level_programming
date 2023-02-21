#include "main.h"
/**
 * _islower - short description
 * @c: input character
 * Return: 0 if lower
 */
int _islower(int c)
{
	if ('a' <= c && 'z' >= c)
		return (1);
	else
		return (0);
}
