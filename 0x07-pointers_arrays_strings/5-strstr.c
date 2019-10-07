#include "holberton.h"
/**
 * _strstr - get length of a prefix substring
 * @haystack: string passed in
 * @needle: Characters to check
 * Return: Always cnt
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp1 = haystack;
		char *find = needle;

		while (*haystack && *find && *haystack == *find)
		{
			haystack++;
			find++;
		}
		if (!*find)
			return (temp1);
		haystack = temp1 + 1;
	}
	return ('\0');
}
