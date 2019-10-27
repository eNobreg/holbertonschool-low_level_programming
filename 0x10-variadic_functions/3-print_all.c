#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * helper - a switch case
 * @s: char to check case
 * Return: 1 or 0
 */

int helper(char s)
{
	switch (s)
	{
		case 'c':
			return (1);
		case 'f':
			return (1);
		case 'i':
			return (1);
		case 's':
			return (1);
		default:
			return (0);
	}
}

/**
 * print_all - prints all entries
 * @format: Gets the format
 * Return: never
 */
void print_all(const char * const format, ...)
{
	int count2 = 0, val = 1;
	char *value;
	va_list args;

	va_start(args, format);
	while (format && format[count2])
	{
		switch (format[count2])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				value = va_arg(args, char *);
				if (!(value))
				{
					printf("(nil)");
					break;
				}
				printf("%s", value);
		}
		while (format[count2 + val] && (helper(format[count2]) == 1))
		{
			if (helper(format[count2 + val]))
			{
				printf(", ");
				break;
			}
			val++;
		}
		count2++;
	}
	printf("\n");
	va_end(args);
}
