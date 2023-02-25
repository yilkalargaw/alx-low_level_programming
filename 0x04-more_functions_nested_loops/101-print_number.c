#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int magnitude = n;

	/* extract magnitude */
	if (n < 0)
	{
		magnitude = -1 * n;
		_putchar('-');
	}
	while (magnitude / 10 != 0 )
	{
		_putchar('0' + (magnitude % 10));
		magnitude /= 10;
	}

}
