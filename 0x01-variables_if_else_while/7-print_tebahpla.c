#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main ()
{
	char ch=0;

	for(ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);

	putchar(10);

	return(0);
}
