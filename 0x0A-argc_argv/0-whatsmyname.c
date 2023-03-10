#include <stdio.h>
/* #include <stdlib.h> */
/**
 * main - prints prog name
 * @argc: input size
 * @argv: input string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc);
	return (0);
}
