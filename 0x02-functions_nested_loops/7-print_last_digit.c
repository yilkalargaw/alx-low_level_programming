#include "main.h"
/**
 * print_last_digit - print last digit
 * @num: input character
 * Return: last_digit of the
 */
int print_last_digit(int num)
{
	_putchar('0' + _abs(num % 10));
	return (num % 10);
}
