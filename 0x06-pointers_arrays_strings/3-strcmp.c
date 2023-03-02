#include "main.h"

/**
 * _strncmp - compares two strings
 * @s1: input pointer char*
 * @s2: output pointer char*
 *
 * Return: pointer to destination
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	for (; *str_one != 0 && *str_two != 0 && *str_one == *str_two;
		 str_one++, str_two++)
		;

	return (*str_one - *str_two);
}
