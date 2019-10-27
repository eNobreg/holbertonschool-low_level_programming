#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print a string
 * @separator: Separator between strings
 * @n: Number of arguments
 * Return: never
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(strings, char *);
		if (value == NULL)
			value = "(nil)";

		if (i < n - 1 && separator)
			printf("%s%s", value, separator);
		else
			printf("%s", value);

	}
	printf("\n");
	va_end(strings);

}
