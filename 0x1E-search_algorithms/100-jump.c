#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Uses the jump search algorithm to search
 * @array: Sorted array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index of what's found
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, n_size = size, end_b = 0;
	int jump = sqrt(size);


	if (array == NULL)
		return (-1);

	while (array[i] < value && jump < n_size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += jump;
	}

	end_b = i;
	i -= jump;

	printf("Value found between indexes [%d] and [%d]\n", i, end_b);
	while (i <= end_b && i < n_size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
		jump--;
	}
	return (-1);
}
