#include "search_algos.h"



/**
 * binary_search - Uses the binary search algo to search array
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 * Return: -1 or the index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t mid = 0;
	size_t i = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
