#include "holberton.h"


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
	putchar('\n')
}

