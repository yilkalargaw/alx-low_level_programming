#include <stdio.h>
/**
 * main - Lists all the 5 and 3 multiples below 1024 (excluded)
 *
 * Return: 0
 *
*/

int main(void)
{
	unsigned int i;
	unsigned int sum;

	sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%ul\n", sum);

	return (0);
}
