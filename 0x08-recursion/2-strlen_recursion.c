#include "holberton.h"
/**
 * _strlen_recursion - prints the string length of a string
 * @s: Passed string
 * Return: 0 or 1 depending on where the program is
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
