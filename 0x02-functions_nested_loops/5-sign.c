#include "holberton.h"
/**
 * print_sign - Checks if number is alphabetical  or not
 * @n: variable number being passed in
 * Return: Returns 1 if pos, 0 on zero, and -1 on everything else
 *
 */

int print_sign(int n)
{

	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
