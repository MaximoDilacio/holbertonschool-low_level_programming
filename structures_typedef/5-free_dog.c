#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog
 * @d: Pointer to the dog to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
