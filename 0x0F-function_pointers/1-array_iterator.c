#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - perform an action on each element of an array
 * @array: the array
 * @size: size
 * @action: action to be performed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action !=NULL)
	{
		while (size-- > 0)
			action(*array++);
	}
}
