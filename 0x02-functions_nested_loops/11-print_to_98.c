#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check the code
 * @num: input number
 * Return: Always 0.
 */
int print_to_98(int num)
{
	int i;

	for (int i = num ; i <= 98; i++)
		printf("%d%s", i, (i == 98) ? "\n" , ", ");

	return (0);
}
