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
	if (n<0)
		puts("is negative");
	else if(n=0)
		puts("is zero");
	else
		puts("is positive");
	return (0);
}
