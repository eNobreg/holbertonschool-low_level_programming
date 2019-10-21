#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Saves a dog
 * @d: Variable
 * Return: Never
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
