#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to use operations
 * @argc: the size of argv
 * @argv: command line parametrs (argument vector)
 *
 * Return: mostly zero
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	int (*f)(int, int);

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
