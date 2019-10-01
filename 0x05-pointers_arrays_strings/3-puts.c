#include "holberton.h"

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
