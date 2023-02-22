#include <stdio.h>

/**
 * main - add all 3 and 5 multiples below 1024
 * * Return: 0
 *
*/

int main(void)
{
	unsigned int i;
	unsigned int sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%ul\n", sum);
	return (0);

}
