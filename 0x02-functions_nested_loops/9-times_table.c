#include <stdio.h>
/**
 * times_table - print last digit
 *
 * Return: nothing
 */

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				printf("0, ");
			else
				printf("%2d%s", i * j, (j >= 9) ? "\n" : ", ");
		}
	}
}
