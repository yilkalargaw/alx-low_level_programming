#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints input dog-struct
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n",
			   d->name, d->age, d->owner);
}
