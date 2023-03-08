#include "main.h"
/**
 * _puts_recursion - ex 0 on 0x08
 * @s: string pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
		_putchar(10);
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
