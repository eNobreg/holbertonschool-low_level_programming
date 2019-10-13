#include "holberton.h"
/**
 * _strstr - get length of a prefix substring
 * @haystack: string passed in
 * @needle: Characters to check
 * Return: Always cnt
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp1 = haystack;
	char *find = needle; 

	while (*temp1)
	{
		//char *temp1 = haystack;
		//char *find = needle;

		while (*haystack && *find && *haystack == *find)
		{
			haystack++;
			find++;
		}
		if (!*find)
		{
			return (temp1 + 1);
		}
		temp1 = haystack++;
	}
	return ('\0');
}
