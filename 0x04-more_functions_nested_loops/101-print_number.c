#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int magnitude;

	/* extract magnitude */
	(n >= 0) ? (magnitude = n) : (magnitude = -n);

	/* print number using recursion */
	if (n < 0)
		_putchar('-');

	if (magnitude / 10 != 0)
		print_number(magnitude / 10);

	_putchar('0' + (magnitude % 10));

}
