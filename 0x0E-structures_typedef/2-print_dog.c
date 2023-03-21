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
	{
		if (d->age)
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n",
				   (d->name) ? d->name : "(nil)",
				   d->age,
				   (d->owner) ? d->owner : "(nil)");
		}
		else
		{
				printf("Name: %s\nAge: (nil)\nOwner: %s\n",
				   (d->name) ? d->name : "(nil)",
				   (d->owner) ? d->owner : "(nil)");
		}
	}
}
