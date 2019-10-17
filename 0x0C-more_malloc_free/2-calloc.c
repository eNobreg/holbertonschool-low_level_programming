#include "holberton.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * _calloc - Our own Calloc function
 * @nmemb: Number of elements
 * @size: Size of elements
 * Return: Null or arr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int cnt = 0;
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * sizeof(size));
	if (arr == NULL)
		return (NULL);

	for (; cnt < nmemb; cnt++)
		arr[cnt] = 0;

	return (arr);
}
