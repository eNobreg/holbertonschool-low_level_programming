#include "holberton.h"
/**
 * _puts - prints out a string
 * @str: String passed in to proint
 * Return: Never
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
