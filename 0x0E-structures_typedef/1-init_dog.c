#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Saves a dog
 * @d: Variable
 * @name: Saves dogs name
 * @age: Saves dogs age
 * @owner: Saves the owner!
 * Return: Never
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
