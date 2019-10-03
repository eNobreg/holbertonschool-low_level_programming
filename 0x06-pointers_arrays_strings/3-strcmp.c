#include "holberton.h"
/**
 * _strcmp - compares strings
 * @s1: String to compare
 * @s2: String to compare
 * Return: S1 - S2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
