#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of diagonals
 * @a: 2d array representing a matrix
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i= 0, sum1 = 0, sum2 = 0;
	for (; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];

		if (i % (size - 1) == 0 &&
			i != 0 && i != size * size - 1)
			sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
