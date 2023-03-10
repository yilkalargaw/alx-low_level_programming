#include "main.h"
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
