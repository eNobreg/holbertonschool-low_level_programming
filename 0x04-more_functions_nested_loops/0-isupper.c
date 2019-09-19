#include "holberton.h"
/**
 * _isupper - checks if value is upper or lower
 * @c: Value passed in
 * Return: Always 1 0r 2
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
