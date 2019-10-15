#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of size @size
 * @size: Size of arrray
 * @c: Char to fill array wiht
 * Return: Null or ar depending
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
