#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);



	/* personal additions */
	printf("\n\npersonal additions\n");
	n = get_bit(2, 5);
	printf("%d\n", n);
	n = get_bit(4, 3);
	printf("%d\n", n);
	n = get_bit(4, 2);
	printf("%d\n", n);
	n = get_bit(4, 1);
	printf("%d\n", n);
	n = get_bit(0, 0);
	printf("%d\n", n);
	n = get_bit(0, 1);
	printf("%d\n", n);
	return (0);
}
