#ifndef DOG_H
#define DOG_H

#include "main.h"
#include <stdio.h>
/**
 * struct dog - Struct that store information of dog
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
