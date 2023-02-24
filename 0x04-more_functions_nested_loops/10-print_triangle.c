#include "main.h"

/**
 * print_triangle - prints the alphabet using _putchar
 * @size: input square size
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar(10);

	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
			(j >= i) ? _putchar(35) : _putchar(32);
		_putchar(10);
	}
}
