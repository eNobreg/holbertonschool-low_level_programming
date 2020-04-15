#include "search_algos.h"


/**
 * jump_search - Uses the jump search algorithm to search
 * @array: Sorted array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index of what's found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, i = 0;
	size_t jump = 3;

	if (array == NULL)
		return (-1);

	if (array[size - 1] == value)
		return (size - 1);

	while (start <= size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);

		if (value > array[start] && value <= array[start + 3])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, jump);
			for (i = start; i <= jump; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i + 1] == '\0')
					break;
				if (array[i] == value)
					return (value);
			}
		}
		start = jump;
		jump += 3;
	}
	return (-1);
}
