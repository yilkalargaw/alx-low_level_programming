#include "main.h"

/**
 * reverse_array - compares two strings
 * @a: pointer to array of strings
 * @n: length
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = temp;
	}
}
