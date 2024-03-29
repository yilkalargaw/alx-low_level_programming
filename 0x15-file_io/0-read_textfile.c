#include "main.h"

/**
 * read_textfile - prints text file to the POSIX stdout
 * @filename: input file name
 * @letters: input file name
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w; /* r,  /\* read and write sizes *\/ */
	int fd; /* file discriptor most examples use this variable */
	char *buffer; /* string buffer */

	bool check = (!filename || (fd = open(filename, O_RDONLY)) == -1 ||
				  !(buffer = malloc(sizeof(char) * letters))) ? false : true;

	if (check != true)
		return (0);

	w = write(STDOUT_FILENO, buffer, read(fd, buffer, letters));

	close(fd);
	free(buffer);

	return (w);
}
