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
	if (d != NULL;)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		(d->age != NULL) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		printf("Age: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
