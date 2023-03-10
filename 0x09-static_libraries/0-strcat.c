#include "main.h"
/**
 ** _strcat - concatenates two char arrays
 * @dest: input pointer char*
 * @src: output pointer char*
 *
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
