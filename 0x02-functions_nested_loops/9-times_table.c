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

		if (i == 0)
			prinf("0, ");

		for (j = 1; j < 10; j++)
			printf("%2d%s",
				   i * j,
				   (j >= 9) ? "\n" : ", ");
	}
}
