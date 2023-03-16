#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: the start of the range
 * @max: the end of the range
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int i = 0, len, *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (; i < len; i++)
		arr[i] = min + i;

	return (arr);
}
