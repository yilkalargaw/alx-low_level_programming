#include "main.h"
/**
 * void more_numbers(void) - prints the alphabet using _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		for (i = 0 ; i < 15; i++)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
	}
	_putchar(10);
}
