#include "main.h"

/**
 * _puts - prints every other char in a string
 * @str: pointer to string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != 0 ; i++)
	{
		if(i % 2 == 0)
			_putchar(*(str + i));
	}

	_putchar(10);
}
