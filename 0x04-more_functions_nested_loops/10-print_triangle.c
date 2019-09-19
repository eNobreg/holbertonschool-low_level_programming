#include "holberton.h"
/**
 * print_triangle - Printing a diagonal line
 * @size: value passed in
 * Return: Never
 */
void print_triangle(int size)
{

	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= size ; i++)
	{
		for (j = i; j < size ; j++)
			_putchar(32);
		for (j = 1; j <= i ; j++)
			_putchar(35);
		if (i != size)
			_putchar('\n');
	}
}
