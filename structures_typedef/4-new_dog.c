#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *name_copy, *owner_copy;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(doggo);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(doggo);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	doggo->name = name_copy;
	doggo->age = age;
	doggo->owner = owner_copy;

	return (doggo);
}

