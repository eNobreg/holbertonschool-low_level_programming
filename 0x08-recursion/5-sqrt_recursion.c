#include "holberton.h"
/**
 * help - to add a second variable
 * @n: Value passed in
 * @result: Copy of value passed in
 * Return: A lot of different stuff
 */
int help(int n, int result)
{
	if (result * result == n)
		return (result);
	else if (result * result > n)
		return (-1);
	else
		return (help(n, result + 1));
}
/**
 * _sqrt_recursion - Gets the square root of a number
 * @n: Number to find
 * Return: Negative one or the help function
 */

















int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (help(n, 0));
}
