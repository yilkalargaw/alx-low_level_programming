#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);

	printf("Size of a char: %u bytes\n\
Size of an int: %u bytes\n\
Size of a long int: %u bytes\n\
Size of a long long int: %u bytes\n\
Size of a float: %u bytes",
		   sizeof(char),
		   sizeof(int),
		   sizeof(long int),
		   sizeof(long long int),
		   sizeof(float))

		}
