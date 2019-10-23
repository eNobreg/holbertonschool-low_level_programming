#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - indexes an array
 * @array: Array passed in
 * @size: Size passed in
 * @cmp: Passed function
 * Return: somtimes
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (0);

}
