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
	int count;
	count = 0;
	while (s[count] != '\0')
	{
		if(s[count] == c)
			return(s);
		else if (s[count + 2] == c)
			return (s + 2);
		
		count++;
	}
	return (s + 2);
}
