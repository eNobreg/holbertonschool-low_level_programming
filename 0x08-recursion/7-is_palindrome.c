#include "holberton.h"
/**
 * _strlen_recursion - Gets the strength list
 * @s: Passed in value
 * Return: The string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * pal_helper - helper to find a palindrome
 * @s: Passed in string array
 * @i: Beginning of the string
 * @j: End of the string
 * Return: One or zero depending on true or false
 */

int pal_helper(char *s, int i, int j)
{
	if (i == j)
		return (1);

	if (s[i] != s[j])
		return (0);

	if (i < j + 1)
		return (pal_helper(s, i + 1, j - 1));
	return (1);
}
/**
 * is_palindrome - Calls helper function to check if palindrome
 * @s: Passed string
 * Return: Calls the helper funtion to obtain value
 */

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	if (i == 0)
		return (1);
	return (pal_helper(s, 0, i - 1));
}
