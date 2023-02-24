#include "main.h"
/**
 * more_numbers - prints the alphabet using _putchar
 * @size: input square size
 * Return: void
 */

void print_square(int size)
{

	unsigned int i;
	unsigned int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar (35);
			_putchar (10);
		}
	}
	else
			_putchar (10);

}
