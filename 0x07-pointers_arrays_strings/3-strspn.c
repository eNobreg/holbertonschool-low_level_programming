#include "holberton.h"
/**
 * _strspn - get length of a prefix substring
 * @s: string passed in
 * @accept: Characters to check
 * Return: Always cnt
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt, cnt2;

	for (cnt = 0 ; s[cnt] != '\0' ; cnt++)
	{
		for (cnt2 = 0 ; accept[cnt2] != '\0'; cnt2++)
		{
			if (s[cnt] == accept[cnt2])
				break;
		}
		if (!(accept[cnt2]))
			break;
	}
	return (cnt);
}
