#include "main.h"

/**
 * _strncpy - concatenates two char arrays
 * @dest: input pointer char*
 * @src: output pointer char*
 * @n: length
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{

	int j = 0;

	for (; j < n && src[j] != 0 ; j++)
		dest[j] = src[j];

	for (; i < n; j++)
			dest[i] = 0;

	return (dest);
}
