#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: input array
 * @size: size
 * @cmp: the comparison function function
 *
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != NULL && array != NULL)
		for (; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
