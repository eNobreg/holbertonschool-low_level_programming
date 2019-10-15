#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Adds two strings together
 * @s1: First string to add
 * @s2: Second string to add
 * Return: Always temp
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, size;
	char *temp;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	size = i + j + 1;
	temp = malloc(size * sizeof(char));

	j = 0;

	while (k < size)
	{
		if (k < i)
			temp[k] = s1[k];
		else
		{
			temp[k] = s2[j];
			j++;
		}
		k++;
	}
	return (temp);
}
