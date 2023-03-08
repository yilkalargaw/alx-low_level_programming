#include "main.h"
/**
 * is_prime_number_checker - check prime
 * @n: input 1
 * @i: input 2
 *
 * Return: factorial as int
 */
int is_prime_number_checker(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);

	return is_prime_number_checker(n, i + 1);
}

/**
 * is_prime_number_number - check prime
 * @n: input 1
 *
 * Return: factorial as int
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return is_prime_number_checker(n, 2);
}
