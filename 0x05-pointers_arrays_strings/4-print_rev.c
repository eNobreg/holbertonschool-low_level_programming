#include "holberton.h"
/**
 * print_rev - Reverses given string
 * _strlen - Gets stringth Length
 * @s: Pointer for string
 * Return: Never
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	len--;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

/**
 * _strlen - length function
 * @s: character passed in
 * Return: Always C
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
