#include "main.h"
/**
 * pow - calculates factorial
 * @x: input 1
 * @y: input 2
 *
 * Return: factorial as int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		 return (x * _pow_recursion(x, y - 1));

}
