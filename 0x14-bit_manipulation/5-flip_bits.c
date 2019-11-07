#include "holberton.h"
/**
 * flip_bits - amount of bits to flip
 * @n: Value 1
 * @m: Value 2
 * Return: Result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	int result = 0;

	while (value > 0)
	{
		if (value & 1)
			result++;
		value = value >> 1;
	}


	return (result);
}
