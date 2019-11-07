#include "holberton.h"
/**
 * set_bit - gets a bit
 * @n: Value
 * @index: Index to check vlaue at
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1);
}
