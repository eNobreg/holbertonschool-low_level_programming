#include "holberton.h"
/**
 * _pow_recursion - raises a num x to a power y
 * @x: Number to raise
 * @y: Power to raise
 * Return: The function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
