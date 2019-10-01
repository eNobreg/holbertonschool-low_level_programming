#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: Value to pass inside
 * Return: Never
 */

void rev_string (char *s)
{
	int i, j, length;
	char temp [1000];

	i = 0;

	while(*(s + i)!= 0)
	{
		temp[i] = *(s + i);
		i++;
	}
	j = i - 1;
	i = 0;

	while(j >= 0)
	{
		*(s + j) = temp[i];
		j--;
		i++;
	}
}

