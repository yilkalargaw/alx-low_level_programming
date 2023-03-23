#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 *	asked by the user.
 * @s: Pointer to char input
 * Return: Void function
 */
int (*get_op_func(char *s))(int, int)
{
	switch (s[0])
	{
		case '+':
			return (op_add);
		case '-':
			return (op_sub);
		case '*':
			return (op_mul);
		case '/':
			return (op_div);
		case '%':
			return (op_mod);
		default:
			return (NULL);
	}
}
