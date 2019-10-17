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
	unsigned int i, j, k, size, len;
	char *temp;

	i = 0,	j = 0, k = 0;

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
	if (temp == NULL)
		return (NULL);

	len = i;
	i = 0;
	while (k < size)
	{
		if (k < len)
			temp[k] = s1[k];
		else if (i < n && n <= j)
		{
			temp[k] = s2[i];
			i++;
		}
		else if (n >= j)
		{
			temp[k] = s2[i];
			i++;
		}
		k++;
	}
	temp[k] = '\0';
	return (temp);
}
