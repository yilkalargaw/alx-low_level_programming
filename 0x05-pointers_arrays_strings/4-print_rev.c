#include "main.h"
/**
 * print_rev - print a string reverse
 * @s: pointer to char input
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = -1;

	for (i = 0; *(s + i) != 0; i++);
	for (i = i ; i >= 0; i--)
		_putchar(*(s + i));
	_putchar(10);
}
