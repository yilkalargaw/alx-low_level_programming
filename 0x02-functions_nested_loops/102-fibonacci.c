#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0
 *
*/

int main()
{
	int i;
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long num_next;

	num_next = num1 + num1;

	for (i = 3; i < 50; ++i)
	{
		printf("%lu%s", num_next, (i >= 49) ? "\n" : ", ");
		num1 = num2;
		num2 = num_next;
		num_next = num1 + num2;
	}

	return 0;
}
