#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (32);
			}
				_putchar (92);
				_putchar (10);

			}
	}
	else
		_putchar ('\n');
}
