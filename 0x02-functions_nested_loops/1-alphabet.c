#include "holberton.h"
/**
 * print_alphabet - prints the alphabet a-z in lowercase
 * Return: Always nothing
 *
 */
void print_alphabet(void)
{
	int a = 'a';
	int n = '\n';

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}

	_putchar(n);
}
