#include "main.h"


/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 *
 * Return: unsigned int with the decimal value of the num or zero
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	for (; *b != 0 ; b++)
	{
		if (*b < 48 || *b > 49)
			return (0);

		num = (num * 2) + (unsigned int)(*b - '0');
	}

	return (num);
}
