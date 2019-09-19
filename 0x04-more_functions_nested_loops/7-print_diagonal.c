#include "holberton.h"
/**
 * print_diagonal - Printing a diagonal line
 * @n: value passed in
 * Return: Never
 */
void print_diagonal(int n)
{

	int i, j;

	for (i = 1; i <= n ; i++)
	{
		for (j = 2; j <= i ; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
