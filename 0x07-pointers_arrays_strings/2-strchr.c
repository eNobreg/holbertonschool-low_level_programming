#include "holberton.h"
/**
 * _memcpy - sets a portion of memory to a byte
 * @src: value passed in
 * @dest: character to fill memory with
 * @n: How many bytes to fill
 * Return: Always a pointer to s
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if(s[0] == c)
			return(s);
		else if (s[1] == c)
			return (s + 1);
		
		s++;
	}
	return (s + 1);
}
