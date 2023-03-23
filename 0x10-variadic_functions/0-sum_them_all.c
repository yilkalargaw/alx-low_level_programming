#include <stdarg.h>
#include <stdarg.h>

/**
 * sum_them_all - add all parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i=0;

	va_start(args, n);
	for (; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
