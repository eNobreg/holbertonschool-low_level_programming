#include "holberton.h"
/**
 * puts2 - Skips every other character of an array
 * @str: String passed in
 * Retrun: Never
 */

void puts2(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
