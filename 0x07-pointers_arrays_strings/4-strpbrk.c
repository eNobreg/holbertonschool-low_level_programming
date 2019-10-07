#include "holberton.h"
/**
 * _strpbrk - get length of a prefix substring
 * @s: string passed in
 * @accept: Characters to check
 * Return: Always cnt
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int cnt;

	for (; s[0] != '\0' ; s++)
	{
		for (cnt = 0 ; accept[cnt] != '\0'; cnt++)
		{
			if (s[0] == accept[cnt])
				return (s);
		}
	}
	return (0);

}
