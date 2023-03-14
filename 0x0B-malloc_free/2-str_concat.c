#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j, len1, len2;

	if (s1 == NULL) /* check if s1 is NULL */
		s1 = ""; /* treat it as an empty string */

	if (s2 == NULL) /* check if s2 is NULL */
		s2 = ""; /* treat it as an empty string */

	len1 = 0;
	while (s1[len1]) /* get the length of s1 */
		len1++;

	len2 = 0;
	while (s2[len2]) /* get the length of s2 */
		len2++;

	cat = malloc(sizeof(char) * (len1 + len2 + 1)); /* allocate memory for cat */
	if (cat == NULL) /* check if malloc failed */
		return (NULL);

	i = 0;
	for (; i < len1; i++) /* copy s1 to cat */
		cat[i] = s1[i];

	j = 0;
	for (; j < len2; j++) /* copy s2 to cat */
		cat[i + j] = s2[j];

	cat[i + j] = 0; /* add null terminator */

	return (cat); /* return the pointer to cat */
}
