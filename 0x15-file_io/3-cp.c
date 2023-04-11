#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * USAGE_ERROR - prints an error message and exits
 * @fd: file descriptor
 * @fmt: format string
 * @exit_code: exit code
 *
 * Return: void
 */
void USAGE_ERROR(int fd, int exit_code, const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	vdprintf(fd, fmt, args);
	va_end(args);
	exit(exit_code);
}

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
		USAGE_ERROR(2, 97, "Usage: %s filename text\n", argv[0]);

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
		USAGE_ERROR(2, 98, "Error: Can't read from file %s\n", argv[1]);

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
		USAGE_ERROR(2, 99, "Error: Can't write to %s\n", argv[2]);

	while ((r = read(fd1, buffer, 1024)) > 0)
	{
		if (write(fd2, buffer, r) != r)
			USAGE_ERROR(2, 99, "Error: Can't write to %s\n", argv[2]);
	}

	if (r == -1)
		USAGE_ERROR(2, 98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd1) == -1 || close(fd2) == -1)
		USAGE_ERROR(2, 100, "Error: Can't close fd %s\n", strerror(errno));

	return (0);
}
