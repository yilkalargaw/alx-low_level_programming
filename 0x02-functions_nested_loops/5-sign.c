#include "main.h"
/**
 * _isalpha - short description
 * @num: input character
 * Return: 1 if pos, -1 if neg else 0
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
