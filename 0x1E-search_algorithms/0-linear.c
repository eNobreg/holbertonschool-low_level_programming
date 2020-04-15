#include "search_algos.h"

/**
 * linear_search - Searches a list linearly
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index of the found value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
