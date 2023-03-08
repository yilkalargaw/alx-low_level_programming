#include "main.h"
/**
 * _strlen_recursion - ex 2 on 0x08
 * @s: string pointer
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
