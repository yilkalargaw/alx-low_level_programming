#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0
 *
*/

int main(void)
{
	int i;
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long num_next;

	num_next = num1 + num2;

	printf ("%lu, %lu, ", num1, num2);

	for (i = 3; i <= 50; ++i)
	{
		printf("%lu%s", num_next, (i >= 50) ? "\n" : ", ");
		num1 = num2;
		num2 = num_next;
		num_next = num1 + num2;
	}

	return (0);
}
