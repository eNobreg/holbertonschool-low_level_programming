#include "holberton.h"
/**
 * print_square - prints a square based on size
 * @size: size of quare to print
 * Return: Never
 */
void print_square(int size)
{

	int count, c2;

	if (size > 0)
	{
		c2 = 0;
		while (c2 < size)
		{
			count = 0;
			while (count < size)
			{
				_putchar(35);
				count++;
			}
		c2++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

