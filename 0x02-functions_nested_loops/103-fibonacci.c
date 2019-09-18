#include <stdio.h>
/**
 * main - prints fibonacci numbers 0-49
 * Return: Always 0
 */

int main(void)
{
	unsigned long int count, term1, term2, sum, result;

	term1 = 0;
	term2 = 1;
	sum = 0;
	result = 0;

	for (count = 0; count < 32; count++)
	{
		sum = term1 + term2;
		term1 = term2;
		term2 = sum;

		if (count < 49 && sum % 2 == 0)
		{
			result += sum;
		}

	}
	printf("%ld\n", result);
	return (0);
}
