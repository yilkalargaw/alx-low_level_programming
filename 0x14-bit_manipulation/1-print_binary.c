#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer input
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	i = n;

	if (i != 0)
	{
		if ((i >> 1) != 0)
			print_binary(i >> 1);

		_putchar(((i & 1) == 0) ? '0' : '1');
	}
	else if (n == 0)
		_putchar ('0');
}
