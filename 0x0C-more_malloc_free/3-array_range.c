#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - range of array
 * @min: Min value to print
 * @max: Max to print
 * Return: an int
 */
int *array_range(int min, int max)
{
	int add = 0;
	int *arrInt;

	if (min > max)
		return (NULL);
	arrInt = malloc((max - min + 1) * sizeof(int));
	if (arrInt == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		arrInt[add] = min;
		add++;
	}
	return (arrInt);
}
