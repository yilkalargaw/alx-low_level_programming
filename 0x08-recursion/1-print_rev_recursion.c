#include "main.h"
/**
 * _puts_recursion - ex 1 on 0x08
 * @s: string pointer
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!(!s || !*s))
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
