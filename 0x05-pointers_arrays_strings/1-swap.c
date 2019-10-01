#include "holberton.h"
/**
 * swap_int - Ma in function to swap integer
 * @a: Value passed in
 * @b: Value
 * Return: Never
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
