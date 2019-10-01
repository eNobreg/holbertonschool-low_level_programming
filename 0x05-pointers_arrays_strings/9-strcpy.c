#include "holberton.h"
/**
 * *_strcpy - Prints a string
 * @dest: Destination
 * @src: Source
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; src[i] != '\0'; i++ )
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';
	return (dest);
}
