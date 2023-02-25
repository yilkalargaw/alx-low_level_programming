#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int i = 3;

	while (i <= num / 2)
		(num % i == 0) ? (num = num / i) : (i = i + 2);

	printf("%lu\n", num);

	return (0);
}
