#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Print current dog
 * @d: Dog to print
 * Return: never
 */

void print_dog(struct dog *d)
{
	/* Checking name */
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}
