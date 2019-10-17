#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Adds two strings together
 * @s1: First string to add
 * @s2: Second string to add
 * @n: Count
 * Return: Always temp
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len;
	char *temp;

	i = 0,	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	temp = malloc(i + (n + 1) * sizeof(char));

	if (temp == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		temp[k] = s1[k];
	for (len = 0; len < n; len++)
	{
		temp[k] = s2[len];
		k++;
	}

	temp[k] = '\0';
	return (temp);
}
