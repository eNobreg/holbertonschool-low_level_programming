#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - main function
 * @str: Passed string
 * Return: Either null or dupe
 */
char *_strdup(char *str)
{
	int i, j;
	char *dupe;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	dupe = malloc(i * sizeof(char));
	if (dupe == NULL)
		return (NULL);

	while (j < i)
	{
		dupe[j] = str[j];
		j++;
	}
	dupe[j] = '\0';
	return (dupe);
}
