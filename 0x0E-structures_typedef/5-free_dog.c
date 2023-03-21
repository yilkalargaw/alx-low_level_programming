#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs from memory
 * @d: pointer to struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
