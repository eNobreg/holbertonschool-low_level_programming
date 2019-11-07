#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned ints
 * @b: Char to convert
 * Return: The number
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, i = 0;
	unsigned int sum = 0;
	unsigned int pos = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[length])
		length++;
	length--;

	while (length >= 0)
	{
		if (b[length] != '1' && b[length] != '0')
		{
			printf("Inside Error: ");
			return (0);
		}

		if (b[length] == '1')
		{
			sum += pos;
		}
		pos *= 2;
		length--;
		i++;
	}
	return (sum);

}
