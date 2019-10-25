#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char * value;
	va_list strings;
	
	va_start(strings, n);

	for (i = 0; i < n; i ++)
	{
		value = va_arg(strings, char *);
		if (value == NULL)
			value = "(nil)";

		if (i < n - 1 && separator)
			printf("1. %s%s", value, separator);
		else 
			printf("3. %s", value);

	}
	printf("\n");
	va_end(strings);
	
}
