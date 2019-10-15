#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;
	

	if (size == 0) 
		return(NULL);
	else
		ar = malloc(size * sizeof(char));

	while (i < size)
	{
		ar[i] = c;
		i++;	
	}

	free(ar);
	return (ar);
}
