#include "main.h"
/**
 * print_line - prints the alphabet using _putchar
 * @n: input number of underscores
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar(10);
}
