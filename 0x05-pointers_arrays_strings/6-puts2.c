#include "holberton.h"
/**
 * puts2 - Skips every other character of an array
 * @str: String passed in
 * Retrun: Never
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
