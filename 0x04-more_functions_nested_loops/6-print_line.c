#include "holberton.h"
/**
 * print_line - Prints a line
 * @n: length to print
 * Return: Never
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}

			
	}
	_putchar('\n');
}
