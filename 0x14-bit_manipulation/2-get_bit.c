#include "holberton.h"
/**
 * get_bit - gets a bit
 * @n: Value
 * @index: Index to check vlaue at
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);
}
