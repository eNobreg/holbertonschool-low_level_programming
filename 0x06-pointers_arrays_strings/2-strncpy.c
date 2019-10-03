#include "holberton.h"
/**
 * *_strcpy - Prints a string
 * @dest: Destination
 * @src: Source
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for(; i < n ; i++)
	
	dest[i] = '\0';
	return (dest);
}
