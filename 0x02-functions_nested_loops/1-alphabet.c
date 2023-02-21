#include "main.h"
/**
 * print_alphabet - prints the alphabet using _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i=0 ; i<26; i++)
	{
		_putchar('a' + i);
	}

	_putchar(10);
}
