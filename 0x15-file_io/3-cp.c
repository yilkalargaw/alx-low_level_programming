#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies contents of a file
 * @argc: Number of arguments passed
 * @argv: Array of pointers to arguments
 *
 * Return: 0 on sucess
 */
int main(int argc, char **argv)
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s filename text\n", argv[0]);
		exit(1);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(1);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(1);
	}

	return ((argc && argv[0]) ? 0 : 1);
}
