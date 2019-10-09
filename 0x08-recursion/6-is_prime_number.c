#include "holberton.h"
/**
 * prime_helper - Find prime numbers
 * @n: Value two
 * @s: Original value
 * Return: A lot of stuff
 */
int prime_helper(int n, int s)
{
	if (n == s)
		return (1);
	else if (s % n == 0)
	{
		return (0);
	}
	else
		return (prime_helper(n + 1, s));
}
/**
 * is_prime_number - Finds prime numbers
 * @n: Value passed in
 * Return: A lot of stuff
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (prime_helper(2, n));
}
