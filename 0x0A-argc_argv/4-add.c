#include <stdio.h>
#include <stdlib.h>

/**
 * isnumber - checks string is a num
 * @s: pointer to the string
 *
 * Return: 1 if valid, 0 otherwise
 */
int isnumber(char *s)
{
	for (; *s != '\0'; s++)
	{
		if (*s < '0' || *s > '9')
			return (0);
	}

	return (1);
}

/**
 * my_atoi - converts a string int
 * @s: iput string
 *
 * Return: integer
 */
int my_atoi(char *s)
{
	int result = 0;

	for (; *s != 0; s ++)
		result = result * 10 + (*s - '0');

	return (result);
}

/**
/**
 * main - adds numbers.
 * @argc: input size
 * @argv: input string array
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int len = argc - 1;
	int i = 1;

	for (; i <= len; i++)
	{
		char *arg = argv[i];

		if (!isnumber(arg))
		{
			printf("Error\n");
			return (1);
		}

		sum += my_atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
