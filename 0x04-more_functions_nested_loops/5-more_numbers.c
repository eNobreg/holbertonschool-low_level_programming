#include "holberton.h"
/**
 * more_numbers - Prints numbers
 * Return: Never
 */

void more_numbers(void)
{
	int i, b;

	i = 0;
	while (i < 11)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			b++;
		}

		i++;
		_putchar('\n');
	}
}

