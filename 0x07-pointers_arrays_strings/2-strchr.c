#include "holberton.h"
/**
 * _strchr - sets a portion of memory to a byte
 * @s: value passed in
 * @c: character to fill memory with
 * Return: Always a pointer to s
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
