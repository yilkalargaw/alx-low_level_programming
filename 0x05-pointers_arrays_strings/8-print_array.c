#include <stdio.h>
/**
 * print_array - print array
 * @a: pointer to array
 * @n: size
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%s,%s",
			   (n >= 0) ? sprintf("%i", *(a + i)) : "\n",
			   (i >= n - 1) ? "\n" : ", ");
}
