#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n",
		   sprintf("Size of a char: %u byte(s)", sizeof(char)),
		   sprintf("Size of a int: %u byte(s)", sizeof(int)),
		   sprintf("Size of a long int: %u byte(s)", sizeof(long int)),
		   sprintf("Size of a long long int: %u byte(s)", sizeof(long long int)),
		   sprintf("Size of a float: %u byte(s)", sizeof(float)));
	return (0);
}
