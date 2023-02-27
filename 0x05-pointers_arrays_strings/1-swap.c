#include "main.h"

/**
 * swap_int - swap
 * @a: pointer to first input
 * @b: pointer to second input
 * Return: void function
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
