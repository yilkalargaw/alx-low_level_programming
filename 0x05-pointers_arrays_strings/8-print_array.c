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

    if (n < 0)
		printf("\n\n");
	else
		for (i = 0; i < n; i++)
			printf("%i%s", *(a + i), (i >= n) ? "\n" : ", ");
}
