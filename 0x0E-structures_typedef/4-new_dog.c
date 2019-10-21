#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int count = 0, i = 0, j = 0;
	dog_t *dog2;

	dog2 = (dog_t *)malloc(sizeof(struct dog));
	if (dog2 == NULL)
		return (NULL);
	
	for (; name[i] != '\0'; i++)
		;
	for (; owner[j] != '\0'; j++)
		;

	dog2->name = malloc(sizeof(dog2->name) * i);
	if (dog2->name == NULL)
	{
		free(dog2);
		return(NULL);
	}
	dog2->owner = malloc(sizeof(dog2->owner) * j);
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
