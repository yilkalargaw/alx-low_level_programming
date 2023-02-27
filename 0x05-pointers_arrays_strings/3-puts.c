#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to string
 *
 * Return: len (Size s).
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != 0 ; i++)
		_putchar(*(str + i));

	_putchar(10);
}
