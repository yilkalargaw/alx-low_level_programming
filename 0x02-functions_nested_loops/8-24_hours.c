#include <stdio.h>
/**
 * jack_bauer - print last digit
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int j;

		for (j = 0; j < 60; j++)
			printf("%02d:%02d\n", i, j);

	}
}
