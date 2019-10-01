#include <stdio.h>
#include "holberton.h"

void print_array(int *a, int n)
{
	int count;
	for (count = 0; count < n; count++)
	{
		if (count != n-1)
			printf("%d, ", a[count]);
		else
			printf("%d", a[count]);
	}
	putchar('\n');
}
