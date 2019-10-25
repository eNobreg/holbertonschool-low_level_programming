#include <stdio.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);
	
	for (;i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
