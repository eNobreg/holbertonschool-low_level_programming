#include "holberton.h"
/**
 * print_line - Prints a line
 * @n: length to print
 * Return: Never
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar(95);
		_putchar('\n');
	}
	if (n == 0)
	{
		_putchar('\n');
	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
