#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - concatenates two char arrays
 * @b: input int
 *
 * Return: pointer for position allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		 exit(98);

	 return (p);
}
