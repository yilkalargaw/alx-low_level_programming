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
	unsigned long sum;

	num_next = num1 + num2;
	sum = 2;
	i = 3;


	while (num_next < 4000000)
	{
		num1 = num2;
		num2 = num_next;
		num_next = num1 + num2;

		if ((num_next % 2) == 0)
			sum += num_next;

		i++;
	}

	printf("%ul\n", sum);

	return (0);
}
