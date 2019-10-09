#include "holberton.h"
/**
 * factorial - gets the factorial of a number
 * @n: Number passed in
 * Return: The function
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
