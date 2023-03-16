#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (len2 < n)
		len2++;

	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cat == NULL)
		return (NULL);

	i = 0;
	for (; i < len1; i++)
		cat[i] = s1[i];

	j = 0;
	for (; j < len2; j++)
		cat[i + j] = s2[j];

	cat[len1 + len2] = 0;

	return (cat);
}
