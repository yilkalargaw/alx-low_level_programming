#include "main.h"
/**
 * _islower - short description
 *
 * Return: 0 if lower
 */
int _islower(int num)
{
	if ('a' <= num && 'z' >= num)
		return (1);
	else
		return (0);
}
