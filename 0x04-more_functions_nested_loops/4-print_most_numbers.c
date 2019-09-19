#include "holberton.h"
/**
 * print_most_numbers - Printing numbers except 2 and 4
 * Return: Never
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}

