#include "main.h"
/**
 * sqrt_helper - check prime
 * @n: number
 * @low: low number
 * @high: high
 *
 * Return: int for sqrt
 */
int sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	if (mid == 0)
		return (-1);

	if (mid == n / mid || mid == n / (mid + 1))
		return (mid);

	if (mid < n / mid)
		return (sqrt_helper(n, mid + 1, high));

	return (sqrt_helper(n, low, mid - 1));
}

/**
 * _sqrt_recursion - check prime
 * @n: number
 *
 * Return: int for sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	return (sqrt_helper(n, 0, n));
}
