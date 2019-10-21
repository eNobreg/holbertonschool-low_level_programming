#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new dog function
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Age of owner
 * Return: New array
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int count, nLen = 0, oLen = 0;
	dog_t *dog2;

	while (name[nLen++])
		;
	while (owner[oLen++])
		;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(sizeof(dog2->name) * nLen);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}

	dog2->owner = malloc(sizeof(dog2->owner) * oLen);
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}

	dog2->age = age;

	for (count = 0; count < nLen; count++)
		dog2->name[count] = name[count];
	for (count = 0; count < oLen; count++)
		dog2->owner[count] = owner[count];

	return (dog2);
}
