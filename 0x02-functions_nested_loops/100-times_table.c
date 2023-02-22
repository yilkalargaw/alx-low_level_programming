#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print last digit
 * @num: number to calculate n times table for
 * Return: nothing
 */

void print_times_table(int num)
{
	int i;

	if (0 <= num && 15 >= num)
	{
		for (i = 0; i <= num; i++)
		{
			int j;

			for (j = 0; j <= num; j++)
			{
				if (j == 0 && num != 0)
					printf("0, ");
				else if (j == 0 && num == 0)
					printf("0\n");
				else
					printf("%3d%s", i * j, (j == num) ? "\n" : ", ");
			}
		}
	}
}
