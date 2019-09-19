#include "holberton.h"
/**
 * _isdigit - says is digit
 * @c: Values to pass in
 * Return: Always zero or one
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
