#include "main.h"

/**
 * puts_half - prints a string
 * @str: pointer to string
 *
 * Return: len (Size s).
 */
void puts_half(char *str)
{
	int i = 0;
	int len;

	len = 0;
	while (str[len] != 0)
		len++;

	for (i = 0; i <= len / 2 ; i++)
		_putchar(*(str + i));

	_putchar(10);
}
