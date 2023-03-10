#include "main.h"
/**
 * _abs - short description
 * @num: input character
 * Return: absolute value of num
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (0);
	}
}
