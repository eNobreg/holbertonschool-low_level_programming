#include <stdio.h>
/**
 * main - prints fibonacci numbers 0-49
 * Return: Always 0
 */

int main(void)
{
	unsigned long int count, term1, term2, sum;

	term1 = 0;
	term2 = 1;
	sum = 0;

	for (count = 0; count <= 49; count++)
	{
		if (count != 49)
		{
			sum = term1 + term2;
			term1 = term2;
			term2 = sum;
			printf("%ld, ", sum);
		}
		else
			printf("%ld\n", sum);

	}
	return (0);
}
