#include "holberton.h"
/**
 * _puts_recursion - prints "Betty Holberton" using recursion
 * @s: Array pased in
 * Return: Never because its a void function
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
