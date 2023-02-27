#include "main.h"

/**
 * puts - prints a string
 * @str: pointer to string
 *
 * Return: len (Size s).
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len] != 0)
		len++;

	for (i = (len + 1) / 2; i < len ; i++)
		_putchar(*(str + i));

	_putchar(10);
}
