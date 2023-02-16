#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n\
Size of an int: %u byte(s)\n\
Size of a long int: %u byte(s)\n\
Size of a long long int: %u byte(s)\n\
Size of a float: %u byte(s)\n",
		   sizeof(char),
		   sizeof(int),
		   sizeof(long int),
		   sizeof(long long int),
		   sizeof(float));
	return (0);
}
