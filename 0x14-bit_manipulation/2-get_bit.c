#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int to be searched for bit value
 * @index: index to bit
 *
 * Return: 1, 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index < 64)
		return (0);

	if (index >= 64)
		return (-1);

	return (1 & (int)(n >> index));
}
