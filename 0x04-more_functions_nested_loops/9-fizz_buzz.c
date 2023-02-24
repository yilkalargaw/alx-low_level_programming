#include <stdio.h>

/**
 * main - prints the alphabet using _putchar
 *
 * Return: void
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf ("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			(i == 100) ? printf("Buzz\n") : printf("Buzz ");
		else
			printf("%d ", i);
	}
	return 0;
}
