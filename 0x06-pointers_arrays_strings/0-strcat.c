#include "holberton.h"
/**
 * *_strcat - Prints a string
 * @dest: Destination
 * @src: Source
 * Return: Always dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
