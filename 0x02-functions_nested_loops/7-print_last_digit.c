#include "holberton.h"
/**
 * print_last_digit - Finding the last digit
 * @i: Counter
 * Return: Always the last digit
 */
int print_last_digit(int i)
{
	int lastdigit = i % 10;

	if (i < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
