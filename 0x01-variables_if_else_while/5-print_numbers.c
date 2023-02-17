#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int i = 0;
	for (i = 0 ; i < 10 ; i++)
		printf("%i", i);

	putchar(10);

	return (0);
}
