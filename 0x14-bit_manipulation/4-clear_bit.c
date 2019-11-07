#include "holberton.h"
/**
 * clear_bit - gets a bit
 * @n: Value
 * @index: Index to check vlaue at
 * Return: 1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~mask);
		return (1);
	}

	return (-1);
}
