#include "main.h"
/**
 * rev_string - reverse string
 * @s: input pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;

	char tmp[1000];

	for (i = 0; *(s + i) != 0; i++)
		tmp[i] = *(s + i);

	for (i -= 1, j = 0; i >= 0; i--, j++)
		*(s + j) = tmp[i];
}
