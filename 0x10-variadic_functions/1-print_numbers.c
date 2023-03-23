#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		printf("%s", i != n - 1 && separator != NULL ? separator : "");
	}

	printf("\n");

	va_end(args);
}
