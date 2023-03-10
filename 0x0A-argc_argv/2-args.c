#include <stdio.h>
/**
 * main - prints argument number
 * @argc: input size
 * @argv: input string array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
