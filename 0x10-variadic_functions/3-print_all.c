#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all entries
 * @format: Gets the format
 * Return: never
 */
void print_all(const char * const format, ...)
{
	int count2 = 0;
	char *value;
	va_list args;

	va_start(args, format);
	while (format[count2] != '\0')
	{
		switch (format[count2])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				count2++;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				count2++;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				count2++;
				break;
			case 's':
				value = va_arg(args, char *);
				if (!(value))
				{
					printf("(nil)");
					count2++;
				}
				else
				{
					printf("%s", value);
					count2++;
				}
				break;
			}
			if (format[count2] != '\0')
				printf(", ");
		}
		printf("\n");
		va_end(args);
}

