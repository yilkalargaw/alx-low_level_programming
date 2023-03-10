#include "main.h"

/**
 * _strncat - concatenates two char arrays
 * @dest: input pointer char*
 * @src: output pointer char*
 * @n: length
 *
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		i++;

	for (; j < n && dest[j] != 0 && src[j] != 0 ; j++, i++)
		dest[i] = src[j];

	dest[i] = 0;

	return (dest);
}
