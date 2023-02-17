#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
