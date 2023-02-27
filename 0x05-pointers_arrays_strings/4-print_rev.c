#include "main.h"
/**
 * print_rev - print a string reverse
 * @s: pointer to char input
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar(10);
}
