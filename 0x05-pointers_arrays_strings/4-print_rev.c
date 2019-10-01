#include "holberton.h"

void print_rev(char *s)
{
	int len;
	len = _strlen(s);

	for (;(len - 2) >= 0;)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
