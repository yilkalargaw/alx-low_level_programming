#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
