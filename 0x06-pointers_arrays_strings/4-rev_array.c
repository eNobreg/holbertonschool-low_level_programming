#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @a: Array passed in
 * @n: Bytes to print
 * Return: Never
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	tmp = 0;
	n -= 1;

	while (i <= n)
	{
		tmp = a[n];
		a[n--] = a[i];
		a[i++] = tmp;
	}
}
