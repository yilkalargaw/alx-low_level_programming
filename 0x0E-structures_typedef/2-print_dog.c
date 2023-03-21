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
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		(d->age) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		printf("Age: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
