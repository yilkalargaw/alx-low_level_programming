#include "main.h"
/**
 * print_alphabet - prints the alphabet using _putchar
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 260; i++)
	{
		_putchar('a' + (i % 26));
		if( i%26 == 25)
			_putchar(10);
	}
}
