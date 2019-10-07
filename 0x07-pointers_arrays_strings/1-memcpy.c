#include "holberton.h"
/**
 * _memcpy - sets a portion of memory to a byte
 * @src: value passed in
 * @dest: character to fill memory with
 * @n: How many bytes to fill
 * Return: Always a pointer to s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0 ; n > 0 ; count++)
	{
		dest[count] = src[count];
		n -= 1;
	}
	return (dest);
}
