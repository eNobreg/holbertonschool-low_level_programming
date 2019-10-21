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
	int count, i = 0, j = 0;
	dog_t *dog2;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(sizeof(dog2->name) * (i + 1));
	if (dog2->name == NULL)
	{
		free(dog2);
		return(NULL);
	}

	dog2->owner = malloc(sizeof(dog2->owner) * (j + 1));
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return(NULL);
	}

	dog2->age = age;

	for (count = 0; count < i; count++)
		dog2->name[count] = name[count];
	for (count = 0; count < j; count++)
		dog2->owner[count] = owner[count];

	return (dog2);
}
