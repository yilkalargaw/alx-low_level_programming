#include "main.h"
/**
 * void more_numbers - prints the alphabet using _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0 ; j < 10; j++)
	{
		for (i = 0 ; i < 15; i++)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
		}
		_putchar(10);
	}
}
