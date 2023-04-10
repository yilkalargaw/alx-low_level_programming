#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

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
	char buffer[1024];
	ssize_t r;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s filename text\n", argv[0]);
		exit(1);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(1);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(1);
	}

	while ((r = read(fd1, buffer, 1024)) > 0)
	{
		if (write(fd2, buffer, r) != r)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(1);
		}
	}

	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(1);
	}

	if (close(fd1) == -1 || close(fd2) == -1) {
		dprintf(2, "Error: Can't close fd %s\n", strerror(errno));
		exit(1);
	}

	return (0);
}
