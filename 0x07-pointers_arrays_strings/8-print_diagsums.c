#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of diagonal numbers in a 2D array
 * @a: Array passed into the function
 * @size: Size of the array passed in
 * Return: never
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		printf ("\n One: %d size +1: %d\n", sum1, ((size + 1) * i));
	}
	for (j = 0 ; j < size; j++)
	{
		sum2 += a[(size - 1) * (j + 1)];
		printf ("\n Two: %d Size +1: %d\n", sum2, ((size - 1) * (j + 1)));
	}


	printf("\n%d, %d\n", sum1, sum2);
}
