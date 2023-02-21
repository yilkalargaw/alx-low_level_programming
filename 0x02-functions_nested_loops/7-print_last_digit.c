#include "main.h"
/**
 * print_last_digit - print last digit
 * @num: input character
 * Return: last_digit of the
 */
int print_last_digit(int num)
{
	unsigned int lastdigit;
	(num >= 0) ? lastdigit = num % 10 ? lastdigit = -1 * num % 10;
	_putchar(lastdigit);
	return (lastdigit);
}
