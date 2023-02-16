#include <stdio.h>
/**
 * main - is the place we are printing a formatted string to stdout
 *
 * Return: returns 0
 */
int main(void)
{
	printf("%s%lu%s\n%s%lu%s\n%s%lu%s\n%s%lu%s\n%s%lu%s\n",
		   "Size of a char: ", sizeof(char), "byte(s)",
		   "Size of a int: ", sizeof(int), "byte(s)",
		   "Size of a long int: ", sizeof(long int), "byte(s)",
		   "Size of a long long int: ", sizeof(long long int), "byte(s)",
		   "Size of a float: ", sizeof(float), "byte(s)");
	return (0);
}
