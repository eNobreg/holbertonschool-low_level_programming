#include "holberton.h"
/**
 * print_triangle - Printing a diagonal line
 * @size: value passed in
 * Return: Never
 */
void print_triangle(int size)
{

	int i, j;
	i = 1;

	if (i != 0)
	{
		for (i = 1; i <= size ; i++)
		{
			for (j = i; j < size ; j++)
				_putchar(32);
			for (j = 1; j <= i ; j++)
				_putchar(35);
			if (i <= size)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
