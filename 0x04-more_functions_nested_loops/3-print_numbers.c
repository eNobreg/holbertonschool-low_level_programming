#include "holberton.h"
/**
 * print_numbers - prints 1-9
 * Return: Never
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

