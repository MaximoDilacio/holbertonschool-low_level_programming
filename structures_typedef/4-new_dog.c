#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int i, name_len = 0, owner_len = 0;

	if (!name || !owner)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);

	doggo->name = malloc(name_len + 1);
	doggo->owner = malloc(owner_len + 1);
	if (!doggo->name || !doggo->owner)
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		doggo->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		doggo->owner[i] = owner[i];

	doggo->age = age;

	return (doggo);
}

