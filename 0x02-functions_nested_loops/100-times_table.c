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
	if (0 <= num && num <= 15)
		{
			for (i = 0; i <= num; i++)
				{
					int j;

					for (j = 0; j <= num; j++)
						{
							if (j == 0)
								printf("0, ");
							else
								printf("%3d%s",
									   i * j,
									   (j >= num) ? "\n" : ", ");
						}
				}
		}

}
