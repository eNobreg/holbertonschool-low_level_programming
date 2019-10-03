#include "holberton.h"
/**
 * _strncpy - Prints a string
 * @dest: Destination
 * @src: Source
 * @n: Bytes to parse
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)

	dest[i] = '\0';
	return (dest);
}
