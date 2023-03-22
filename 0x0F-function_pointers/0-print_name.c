#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name using the function pointers
 * @name: name
 * @f: the function to call
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
