#include <stdio.h>
#include <stdlib.h>

/*
 * print_opcodes - prints the opcodes of its own main function.
 * @start - string pointer
 * @size -size
 *
 * Return: void
 */
void print_opcodes(char *start, int size)
{
	int i = 0;

	for (; i < size; i++)
	{
		printf("%02hhx", start[i]);
		(i == size - 1) ? printf("\n") : printf(" ");
	}
}

/*
 * main - prints the opcodes of its own main function.
 * @argc: size of argv
 * @argv: command line arguments
 *
 * Return: f the number of argument is not the correct one,
 * print Error, followed by a new line, and exit with the status 1
 * If the number of bytes is negative, print Error, followed by a new line,
 * and exit with the status 2
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)main, size);

	return (0);
}
