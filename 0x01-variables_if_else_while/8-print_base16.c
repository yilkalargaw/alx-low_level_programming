#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int i = 0;

	for (i = 0; i <= 15; i++)
		putchar("0123456789abcdef"[i]);

	putchar(10);

	return (0);
}
