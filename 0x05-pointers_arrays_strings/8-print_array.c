#include <stdio.h>
#include "holberton.h"
/**
 * print_array - Prints an array based on input
 * @a: Array passed in
 * @n: Number of array entries to print
 * Return: Never
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count != n - 1)
			printf("%d, ", a[count]);
		else
			printf("%d", a[count]);
	}
	putchar('\n');
}
