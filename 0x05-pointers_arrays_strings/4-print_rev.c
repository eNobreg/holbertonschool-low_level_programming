#include "holberton.h"

void print_rev(char *s)
{
	int len;
	len = _strlen(s);

	for (;(len - 1) >= 0;)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
