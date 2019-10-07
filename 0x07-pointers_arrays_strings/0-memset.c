#include "holberton.h"
/**
 * _memset - sets a portion of memory to a byte
 * @s: value passed in
 * @b: character to fill memory with
 * @n: How many bytes to fill
 * Return: Always a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0 ; count < n ; count++)
	{
		s[count] = b;
	}
	return (s);
}
