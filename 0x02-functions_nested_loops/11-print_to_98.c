#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check the code
 * @num: input number
 * Return: nothing
 */
void print_to_98(int num)
{
	int i;

	if (num <= 98)
	{
		for (i = num ; i <= 98; i++)
			printf("%d%s", i, (i == 98) ? "\n" : ", ");
	}
	else
	{
		for (i = num ; i >= 98; i--)
			printf("%d%s", i, (i == 98) ? "\n" : ", ");
	}

}
