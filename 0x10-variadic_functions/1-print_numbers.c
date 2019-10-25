#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	
	va_start(nums, n);

	for (i = 0; i < n; i ++)
	{
		if (i < n - 1 && separator != NULL)
			printf("%d%s", va_arg(nums, int), separator);
		else 
			printf("%d", va_arg(nums, int));

	}
	va_end(nums);
	
}
