#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
	int *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit(98);
	return (ar);
}
