#include "main.h"

/**
 *_strlen - return length of a string
 *@s: pointer to string
 *
 *Return: length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
		len++;

	return (len);
}

/**
 * create - creates a file
 * @filename: input file name string
 * @text_content: input string
 *
 * Return: integer showing status
 */
int create_file(const char *filename, char *text_content)
{
	/* ssize_t w; /\* r,  /\\* read and write sizes *\\/ *\/ */
	int fd, w; /* file discriptor most examples use this variable */

	bool check = (!filename ||
				  (fd = open(filename,
							 O_CREAT |
							 O_RDWR |
							 O_TRUNC, 0600)) == -1) ? false : true;
	if (check != true)
		return (-1);

	text_content = (text_content) ? text_content : "";

	w = write(fd, text_content, _strlen(text_content));

	close(fd);


	return ((w == -1) ? -1 : w);
}
