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
	int shifted = (int)(n >> index);

	return ((shifted > 0 || shifted != 0) ? 1 & shifted : -1);
}
