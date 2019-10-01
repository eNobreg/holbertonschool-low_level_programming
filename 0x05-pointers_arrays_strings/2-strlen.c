#include "holberton.h"
/**
 * _strlen - gets length of string
 * @s: Value passed in
 * Return: Always C
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
